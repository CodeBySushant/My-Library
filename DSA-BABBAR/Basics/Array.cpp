#include<iostream>
using namespace std;
int main(){
    int arr[10];
    cout<<"Enter element in array: ";
    // Taking array elements as input
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    // Printing all elements present in array
    cout<<"Elements in array are: ";
    for(int i=0; i<10; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}