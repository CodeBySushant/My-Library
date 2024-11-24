#include<iostream>
using namespace std;
void takeArray(int n, int arr[]){
    // Taking array as input
    for(int i=0; i<n; i++){
        cout<<"Enter value of array "<<i<<" : ";
        cin>>arr[i];
    }
    // Printing taken array elements
    cout<<"The array elements are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
};
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int* arr = new int [n];
    takeArray(n, arr);
    cout<<endl;
    int temp;
    // Bubble Sorting Given Elements
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]<arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    // Printing Reversed array
    cout<<"The reversed sorted elements are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    return 0;
}