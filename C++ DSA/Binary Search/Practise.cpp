//Just for practise
#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int start=0;
    int end = n-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
        return mid;
        }
        if(key>mid){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter the elements in array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The elements in array are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    int key;
    cout<<"Enter the key to search: ";
    cin>> key;
    cout<<binarySearch(arr, n, key);
    return 0;
}