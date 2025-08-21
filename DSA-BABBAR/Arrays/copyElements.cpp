// Copy Elements of 1 array into another
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr1[100];
    int arr2[100];

    cout<<"Enter elements of array1: ";
    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }

    //Copying elements of arr1 into arr2
    for(int i=0; i<n; i++){
        arr2[i]=arr1[i];
    }
    //Printing copied elements of arr1
    cout<<"Elements in array 2 are: ";
    for(int i=0; i<n; i++){
        cout<<arr2[i]<<" ";
    }
}