#include<iostream>
using namespace std;
#define MAX 5

// Merge function to combine two halves
void merge(int arr[], int left, int mid, int right) {
    int i = left, j = mid + 1, k = 0;
    int temp[right - left + 1];

    // Merge the two halves
    while (i <= mid && j <= right) {
        if (arr[i] < arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }

    // Copy remaining elements
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    // Copy back to original array
    for (int i = 0; i < k; i++) {
        arr[left + i] = temp[i];
    }
}

// Recursive Merge Sort function
void mergeSort(int arr[], int left, int right) {
    if (left >= right) return;

    int mid = (left + right) / 2;

    // Divide
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Conquer (Merge)
    merge(arr, left, mid, right);
}

int main() {
    int arr[MAX];
    cout << "Enter " << MAX << " elements of the array: ";
    for (int i = 0; i < MAX; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, MAX - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < MAX; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
