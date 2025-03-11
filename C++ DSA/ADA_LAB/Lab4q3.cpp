/* Q3> Write a program to solve the defective coin problem, which involves identifying any defective coin, if present, and determining the nature of the defect (lighter/heavier) from a set of coins containing at most one defective coin using the divide and conquer approach.*/

#include <iostream>
#include <vector>
using namespace std;

// Function to calculate the total weight of coins in a group
int totalWeight(const vector<int>& coins, int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += coins[i];
    }
    return sum;
}

int determineNormalWeight(const vector<int>& coins) {
    int w0 = coins[0], w1 = coins[1], w2 = coins[2];
    if (w0 == w1 || w0 == w2)
        return w0;
    else
        return w1;
}

// Recursive function to find the defective coin
void findDefectiveCoin(const vector<int>& coins, int start, int end, int normalWeight) {
    int numCoins = end - start + 1;
    
    if (numCoins == 1) {
        int defect = coins[start] - normalWeight;
        cout << "Defective coin found at index: " << start << endl;
        if (defect < 0)
            cout << "It is lighter by " << -defect << " unit(s)." << endl;
        else if (defect > 0)
            cout << "It is heavier by " << defect << " unit(s)." << endl;
        else
            cout << "Strange! Coin weight matches normal weight." << endl;
        return;
    }
    // Divide coins into two groups
    int mid = start + (numCoins / 2) - 1;
    int leftWeight = totalWeight(coins, start, mid);
    int rightWeight = totalWeight(coins, mid + 1, end);

    int leftSize = mid - start + 1;
    int rightSize = end - (mid + 1) + 1;

    int expectedLeftWeight = leftSize * normalWeight;
    int expectedRightWeight = rightSize * normalWeight;

    // Compare group weights
    if (leftWeight != expectedLeftWeight) {
        // Defective coin is in the left group
        findDefectiveCoin(coins, start, mid, normalWeight);
    } else if (rightWeight != expectedRightWeight) {
        // Defective coin is in the right group
        findDefectiveCoin(coins, mid + 1, end, normalWeight);
    } else {
        cout << "No defective coin found." << endl;
    }
}
int main() {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;
    if (n < 3) {
        cout << "At least 3 coins are needed to determine normal weight." << endl;
        return 1;
    }
    vector<int> coins(n);
    cout << "Enter coin weights:\n";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    int normalWeight = determineNormalWeight(coins);
    cout << "\nAssumed normal coin weight: " << normalWeight << endl;
    cout << "Starting search for defective coin...\n";
    findDefectiveCoin(coins, 0, n - 1, normalWeight);
    return 0;
}
