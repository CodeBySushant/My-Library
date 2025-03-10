/* Q2> Given a sorted array of distinct non-negative whole numbers. Find the smallest missing number.*/

#include <iostream>
using namespace std;

// Function to find the smallest missing number using Binary Search
int findSmallestMissing(int arr[], int left, int right) {
    if (left > right)
        return left; // This is the smallest missing number

    int mid = left + (right - left) / 2;

    if (arr[mid] == mid)
        return findSmallestMissing(arr, mid + 1, right);
    else
        return findSmallestMissing(arr, left, mid - 1);
}

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " sorted distinct non-negative numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int missing = findSmallestMissing(arr, 0, n - 1);

    cout << "The smallest missing number is: " << missing << endl;

    return 0;
}

//Time complexity: O(logn)