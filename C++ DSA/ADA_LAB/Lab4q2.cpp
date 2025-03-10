/*Q2> Write a program to implement Merge sort using a Link array.*/

#include <iostream>
using namespace std;

const int MAX = 100; // Max nodes in the link array

// Arrays for storing data and links
int data[MAX];
int link[MAX];

// Function to print the linked list starting from index 'start'
void printList(int start) {
    int current = start;
    while (current != -1) {
        cout << data[current] << " ";
        current = link[current];
    }
    cout << endl;
}

// Merge two sorted linked lists and return starting index of merged list
int merge(int p, int q) {
    int mergedStart = -1;
    int mergedEnd = -1;

    while (p != -1 && q != -1) {
        int selected;

        // Select the smaller value
        if (data[p] <= data[q]) {
            selected = p;
            p = link[p];
        } else {
            selected = q;
            q = link[q];
        }

        // Append selected node to merged list
        if (mergedStart == -1) {
            mergedStart = selected;
            mergedEnd = selected;
        } else {
            link[mergedEnd] = selected;
            mergedEnd = selected;
        }
    }

    // Append the remaining part (if any)
    if (p != -1)
        link[mergedEnd] = p;
    else if (q != -1)
        link[mergedEnd] = q;

    // Terminate merged list
    return mergedStart;
}

// Recursive merge sort function
int mergeSort(int start) {
    // Base case: 0 or 1 node
    if (start == -1 || link[start] == -1)
        return start;

    // Step 1: Split the linked list into two halves
    int slow = start;
    int fast = link[start];
    while (fast != -1 && link[fast] != -1) {
        slow = link[slow];
        fast = link[link[fast]];
    }

    int mid = link[slow];
    link[slow] = -1; // Split into two lists

    // Step 2: Sort each half recursively
    int left = mergeSort(start);
    int right = mergeSort(mid);

    // Step 3: Merge sorted halves
    return merge(left, right);
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
        link[i] = i + 1; // Create initial linked list: 0 -> 1 -> 2 ...
    }
    link[n - 1] = -1; // End of list

    cout << "\nOriginal List: ";
    printList(0);

    // Perform merge sort, returns start index of sorted list
    int sortedStart = mergeSort(0);

    cout << "Sorted List: ";
    printList(sortedStart);

    return 0;
}
