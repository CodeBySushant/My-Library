#include<iostream>
using namespace std;
int arraySearching(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        // Compares two elements
        if(arr[i] == key){
            return i;   //If comparision is true it will return index
        }
    }
    return -1;   //If after checking every elements in for loop element is not present it will return -1
};

int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int* arr = new int [n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter key: ";
    int key;
    cin>>key;

    // Prints the index of array where element is present using function calling
    cout<<arraySearching(arr, n, key);
    delete[] arr;
    return 0;
}