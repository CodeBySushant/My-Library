#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){ //Traversing whole array for finding key
        if(arr[i]==key){   //Checking each array to find key
            return i; //if its available it return i and not i++ check for another element in array
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"ENter size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key element to search: ";
    cin>>key;
    cout<<"Index of key in array is: "<<linearSearch(arr, n, key);
    return 0;
}