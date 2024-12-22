#include<iostream>
using namespace std;

int linearSearch(int num, int arr[], int key){
    for(int i=0; i<num; i++){
        if(arr[i] == key){
            return i;
    }
}
return -1;
}

int main(){
    int num;
    cout<<"Enter size of array: ";
    cin>>num;

    int* arr = new int [num];
    cout<<"Enter elements in array: ";
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter key element to check if present in array or not: ";
    cin>>key;

    cout<<"The index of input key element is: ";
    cout<<linearSearch(num, arr, key);

    delete[] arr;
    return 0;
}