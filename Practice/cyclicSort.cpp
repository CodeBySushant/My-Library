#include <iostream>
using namespace std;

void cyclicSort(int arr[], int n) {
    int i = 0;
    while (i < n) {
        int correctIndex = arr[i] - 1;
        if (arr[i] != arr[correctIndex]) {
            // Swap arr[i] with arr[correctIndex]
            swap(arr[i], arr[correctIndex]);
        } else {
            i++;
        }
    }
}

// Utility function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";
}

// Driver code
int main() {
    int arr[] = {3, 1, 5, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:\n";
    printArray(arr, n);

    cyclicSort(arr, n);

    cout << "Sorted array:\n";
    printArray(arr, n);

    return 0;
}
