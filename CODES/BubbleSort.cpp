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
    int arr[n];
    takeArray(n, arr);
    cout<<endl;
    int temp;
    // Bubble Sort Program
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                // Swapping values for sorting
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
        }
    }
}   
// Printing sorted array
    cout<<"The sorted elements are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}