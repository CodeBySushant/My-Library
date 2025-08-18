// Unique number of occurrences
#include<iostream>
using namespace std;

bool uniqueOccurences(int arr[], int n){
    int counter[100];   // to store frequencies
    int k = 0;          // number of unique elements
    int count = 1;      // frequency counter

    // Step 1: Count frequencies (array already sorted)
    for(int i=1; i<=n; i++){   // <= n to include last group
        if(i < n && arr[i] == arr[i-1]){
            count++;
        } else {
            counter[k++] = count;  // store frequency
            count = 1;             // reset
        }
    }

    // Step 2: Sort the frequency array
    for(int i=0; i<k; i++){
        for(int j=0; j<k-i-1; j++){
            if(counter[j] > counter[j+1]){
                swap(counter[j], counter[j+1]);
            }
        }
    }

    // Step 3: Check uniqueness
    for(int i=0; i<k-1; i++){
        if(counter[i] == counter[i+1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Sort array first (Bubble sort)
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){   // ✅ fix
                swap(arr[j], arr[j+1]);
            }
        }
    }

    // Call function
    int result = uniqueOccurences(arr, n);
    if(result){
        cout<<"Unique no. of Occurrences!";
    }
    else{
        cout<<"No unique no. of Occurrences!";
    }

    return 0;
}
