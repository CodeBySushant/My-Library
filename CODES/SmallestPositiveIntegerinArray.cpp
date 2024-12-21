// Find Smallest elements from array required by user

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter size of array: ";
    cin>>num;

    // Creating and taking array input
    int* arr = new int [num];
    for(int i=0; i<num; i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }

    // Bubble Sort in ascending order
    for(int i=0; i<num; i++){
        for(int j=0; j<num-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    int key;
    cout<<"Enter no of smallest elements required from array: ";
    cin>>key;

    //Printing required number of smallest elements from array
    cout<<"Elements are: ";
    for(int i=0; i<key; i++){
        cout<<arr[i]<<" ";
    }

    delete[] arr;
    return 0;
}