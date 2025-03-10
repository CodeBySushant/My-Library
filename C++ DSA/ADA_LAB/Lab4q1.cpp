/* Q1> Write a Program to Sort a given set of numbers using selection sort algorithm. Repeat the experiment for different values of n, the number of elements in the list to be sorted and plot a graph of the time taken versus n. The elements can be read from a file or can be  generated using the random number generator.*/

#include <iostream>
using namespace std;

// Selection Sort function with operation count
long selectionSort(int arr[], int n) {
    long operationCount = 0; // To count comparisons and swaps

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            operationCount++; // Comparison
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i) {
            int temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
            operationCount++; // Swap counted as operation
        }
    }

    return operationCount;
}

// Generate random array
void generateRandomArray(int arr[], int size) {
    unsigned int seed = 12345;

    for (int i = 0; i < size; i++) {
        seed = (seed * 1103515245 + 12345) & 0x7fffffff;
        arr[i] = seed % 10001; // Random numbers from 0 to 10000
    }
}

int main() {
    cout << "Selection Sort Performance Analysis (Operation Count Based)" << endl;
    cout << "===========================================================" << endl;

    int numSizes;
    cout << "Enter the number of test cases (array sizes): ";
    cin >> numSizes;

    int* sizes = new int[numSizes];

    for (int i = 0; i < numSizes; i++) {
        cout << "Enter size for test case " << i + 1 << ": ";
        cin >> sizes[i];
    }

    cout << "\nn\tOperations\tSorted?\n";
    cout << "------------------------------------" << endl;

    for (int i = 0; i < numSizes; i++) {
        int size = sizes[i];
        int* arr = new int[size];

        generateRandomArray(arr, size);

        long operations = selectionSort(arr, size);

        // Verify if sorted correctly
        bool sorted = true;
        for (int j = 1; j < size; j++) {
            if (arr[j] < arr[j - 1]) {
                sorted = false;
                break;
            }
        }

        cout << size << "\t" << operations << "\t\t" << (sorted ? "Yes ✅" : "No ❌") << endl;

        delete[] arr;
    }

    delete[] sizes;

    cout << "\nConclusion:\n";
    cout << "Selection Sort has O(n²) time complexity based on operations counted.\n";

    return 0;
}

//Time complexity O(n^2)

