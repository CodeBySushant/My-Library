#include<iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0; int j=0;
    while(i<n && j<m){
        if(i<n){
            
        }
    }
}

void printSortedArray(int arr3[]){
    for(int i=0; i<arr3.length(); i++){
        cout<<arr3[i]<<endl;
    }
}

int main(){
    int arr1[30], arr2[30];
    int n, m;

    cout<<"Enter size of first array: ";
    cin>>n;
    cout<<"Enter elements of first array: ";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    cout<<endl;

    cout<<"Enter size of second array: ";
    cin>>m;
    cout<<"Enter elements of first array: ";
    for(int i=0; i<m; i++){
        cin>>arr2[i];
    }

    int arr3[60];
    merge(arr1, n, arr2, m, arr3);
    printSortedArray(arr3);

    return 0;
}