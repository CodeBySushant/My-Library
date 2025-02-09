#include<iostream>
using namespace std;
//Function for Linear Search
int linearSearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter elements in array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    //Key is the element to be searched in array
    int key;
    cout<<"Enter your key value to search: ";
    cin>>key;
    cout<<"The index of searched element is: ";
    cout<<linearSearch(arr, size, key);
    return 0;
}