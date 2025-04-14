#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Calculate reliability with redundancy: R(k) = 1 - (1 - r)^k
double getReliabilityWithRedundancy(double baseReliability, int units) {
    return 1.0 - pow(1.0 - baseReliability, units);
}

int main() {
    // Get system specifications
    int numComponents, totalBudget;
    cout << "Enter number of components: ";
    cin >> numComponents;
    cout << "Enter total budget: ";
    cin >> totalBudget;
    
    // Get component details
    vector<double> reliability(numComponents);
    vector<int> unitCost(numComponents);
    
    cout << "Enter base reliability and cost for each component:\n";
    for (int i = 0; i < numComponents; i++) {
        cout << "Component " << (i+1) << "- Reliability (0 to 1): ";
        cin >> reliability[i];
        cout << "Component " << (i+1) << "- Cost per unit: ";
        cin >> unitCost[i];
    }
    
    // Create DP tables
    // dp[i][b] = max reliability possible using first i components with budget b
    vector<vector<double>> dp(numComponents + 1, vector<double>(totalBudget + 1, 0.0));
    
    // redundancy[i][b] = optimal number of units for component i with budget b
    vector<vector<int>> redundancy(numComponents + 1, vector<int>(totalBudget + 1, 0));
    
    // Initialize base case: with 0 components, reliability = 1.0 (empty product)
    for (int b = 0; b <= totalBudget; b++) {
        dp[0][b] = 1.0;
    }
    
    // Fill the DP table
    for (int i = 1; i <= numComponents; i++) {
        int componentIndex = i - 1; // Convert to 0-based index
        
        for (int budget = 0; budget <= totalBudget; budget++) {
            // Default: assume worst case
            dp[i][budget] = 0.0;
            
            // Try different redundancy levels (1 to 10 units)
            for (int units = 1; units <= 10; units++) {
                // Calculate cost for these units
                int totalCost = units * unitCost[componentIndex];
                
                // Skip if over budget
                if (totalCost > budget) continue;
                
                // Calculate reliability with this redundancy
                double componentReliability = getReliabilityWithRedundancy(reliability[componentIndex], units);
                
                // Calculate remaining budget after using these units
                int remainingBudget = budget - totalCost;
                
                // Total reliability = previous components * current component
                double totalReliability = dp[i-1][remainingBudget] * componentReliability;
                
                // Update if better than current best
                if (totalReliability > dp[i][budget]) {
                    dp[i][budget] = totalReliability;
                    redundancy[i][budget] = units;
                }
            }
        }
    }
    
    // Print results
    cout << "Maximum system reliability: " << dp[numComponents][totalBudget] << endl;
    
    // Backtrack to find optimal configuration
    cout << "Optimal redundancy configuration:" << endl;
    int remainingBudget = totalBudget;
    
    for (int i = numComponents; i >= 1; i--) {
        int units = redundancy[i][remainingBudget];
        cout << "Component " << i << ": " << units << " units" << endl;
        
        // Update remaining budget for next component
        remainingBudget -= units * unitCost[i-1];
    }
    
    return 0;
}