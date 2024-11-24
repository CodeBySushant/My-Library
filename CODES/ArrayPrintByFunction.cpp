#include<iostream>
using namespace std;
void takeArray(int n, int arr[]){
    // To take input in array
    for(int i=0; i<n; i++){
    cout<<"Enter array "<<i<<" : ";
    cin>>arr[i];
    }
    // For printing array
    cout<<"The array elements are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
};
int main(){
    int n;
    // Take input array size
    cout<<"Enter the size of the array: ";
    cin>>n;
    // Declaring array size as n
    int* arr = new int [n];
    // Call function to take array input
    takeArray(n, arr);
    return 0;
}