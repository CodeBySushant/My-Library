#include<iostream>
using namespace std;

void alternateSwap(int arr[], int n){
    int left = 0;
    while(left+1 < n){
        swap (arr[left], arr[left + 1]);
        left = left+2;
    }
}

void printAlternateSwap(int arr[], int n){
    cout<<"Elements after alternate swap is: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
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

    cout<<"Array before alternate swap: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    alternateSwap(arr, n);
    printAlternateSwap(arr, n);
    return 0;
}