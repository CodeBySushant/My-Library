#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int l = 0;
    int r = n - 1;
    int mid = l + (r - l)/2;
    while(l<=r){
        if(arr[mid]==key){
            return mid;
        }
        else if(key>arr[mid]){
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
        mid = l + (r - l)/2;
    }
    return -1;
}
int main(){
    int arr[5];
    cout<<"Enter elements of array: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Elements of array are: ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int key;
    cout<<"Enter key: ";
    cin>> key;
    cout<<binarySearch(arr, 5, key);
    return 0;
}