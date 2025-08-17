#include<iostream>
using namespace std;
int linearSearch(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return 0;
}
int main(){
    int arr[100];
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements in array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key to search: ";
    cin>>key;
    int result = linearSearch(arr, n, key);
    cout<<"Index of array where key is present: "<<result;
    return 0;
}