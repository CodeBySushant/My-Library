#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the size of array: ";
    cin>>num;

    int* arr =  new int [num];
    cout<<"Enter elements of array: ";
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    for(int i=0; i<num-1; i++){
        for(int j=i+1; j<num; j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout<<"Sorted elements using selection sort: ";
    for(int j=0; j<num; j++){
        cout<<arr[j]<<" ";
    }

    delete[] arr;
    return 0;
}