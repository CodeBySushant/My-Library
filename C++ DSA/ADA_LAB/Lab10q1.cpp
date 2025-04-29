#include <iostream>
#include <vector>
using namespace std;

// Function to print a subset
void printSubset(const vector<int>& subset) {
    cout << "{ ";
    for (int num : subset) {
        cout << num << " ";
    }
    cout << "}" << endl;
}

// Backtracking function to find subsets
void subsetSum(vector<int>& arr, vector<int>& subset, int index, int currentSum, int target) {
    if (currentSum == target) {
        printSubset(subset); // print current valid subset
        return;
    }

    if (index == arr.size() || currentSum > target) {
        return;
    }

    // Include current element
    subset.push_back(arr[index]);
    subsetSum(arr, subset, index + 1, currentSum + arr[index], target);
    
    // Exclude current element (backtrack)
    subset.pop_back();
    subsetSum(arr, subset, index + 1, currentSum, target);
}

int main() {
    int n, target;
    cout << "Enter number of elements in the set: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "Enter the target sum: ";
    cin >> target;

    vector<int> subset;
    cout << "Subsets with sum " << target << " are:\n";
    subsetSum(arr, subset, 0, 0, target);

    return 0;
}
