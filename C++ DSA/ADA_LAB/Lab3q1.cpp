/* Q1> Write a program to compare binary search and ternary search in terms of number od comparisons done by each. Do this experimentally by plotting the graph and theoretically by analysing the algorithm range search using Binary search.*/

#include <iostream>
using namespace std;

// Function to perform Binary Search with comparison counting
int binarySearch(int arr[], int n, int key, int &comparisons) {
    int left = 0, right = n - 1;
    comparisons = 0;

    while (left <= right) {
        comparisons++; // Comparison for while condition
        int mid = left + (right - left) / 2;

        comparisons++; // Comparing arr[mid] with key
        if (arr[mid] == key)
            return mid;

        comparisons++; // Comparing if key < arr[mid]
        if (key < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1; // Not found
}

// Function to perform Ternary Search with comparison counting
int ternarySearch(int arr[], int n, int key, int &comparisons) {
    int left = 0, right = n - 1;
    comparisons = 0;

    while (left <= right) {
        comparisons++; // Comparison for while condition

        int mid1 = left + (right - left) / 3;
        int mid2 = right - (right - left) / 3;

        comparisons++; // Comparing arr[mid1] with key
        if (arr[mid1] == key)
            return mid1;

        comparisons++; // Comparing arr[mid2] with key
        if (arr[mid2] == key)
            return mid2;

        comparisons++; // Comparing key < arr[mid1]
        if (key < arr[mid1])
            right = mid1 - 1;
        else if (key > arr[mid2]) {
            comparisons++; // Comparing key > arr[mid2]
            left = mid2 + 1;
        } else {
            left = mid1 + 1;
            right = mid2 - 1;
        }
    }

    return -1; // Not found
}

int main() {
    int sizes[] = {10, 100, 500, 1000, 5000, 10000}; // Different input sizes
    int numSizes = sizeof(sizes) / sizeof(sizes[0]);

    cout << "Array Size\tBinary Search Comparisons\tTernary Search Comparisons" << endl;
    cout << "===================================================================" << endl;

    for (int i = 0; i < numSizes; i++) {
        int n = sizes[i];
        int *arr = new int[n];

        // Fill the array with sorted values: 0 to n-1
        for (int j = 0; j < n; j++) {
            arr[j] = j;
        }

        int key = n - 1; // Search for the last element to get the worst case
        int binaryComparisons = 0, ternaryComparisons = 0;

        binarySearch(arr, n, key, binaryComparisons);
        ternarySearch(arr, n, key, ternaryComparisons);

        cout << n << "\t\t" << binaryComparisons << "\t\t\t\t" << ternaryComparisons << endl;

        delete[] arr;
    }

    cout << "===================================================================" << endl;

    // Theoretical Analysis
    cout << "\nTheoretical Analysis:\n";
    cout << "Binary Search: O(log2(n)) comparisons\n";
    cout << "Ternary Search: O(log3(n)) comparisons\n";
    cout << "Asymptotically, Binary Search is better in terms of fewer comparisons per iteration.\n";
    cout << "But both are logarithmic and efficient for searching in sorted arrays.\n";

    return 0;
}


// Binary Search TC: O(log base 2 n)    Ternary Search TC: O(log base 3 n)