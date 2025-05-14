#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the last element as pivot
    int i = low - 1;         // Index of smaller element

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);  // Move smaller element to left
        }
    }
    swap(arr[i + 1], arr[high]);   // Place pivot at the correct position
    return i + 1;                  // Return pivot index
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);  // Partition index

        quickSort(arr, low, pi - 1);  // Sort elements before pivot
        quickSort(arr, pi + 1, high); // Sort elements after pivot
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
