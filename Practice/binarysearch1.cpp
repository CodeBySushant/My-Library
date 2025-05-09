#include<iostream>
using namespace std;
#define n 5

int binarySearch(int arr[], int s, int k){
    int left = 0;
    int right = s - 1;
    int mid = (left + right)/2;
    while(left<=right){
        if(arr[mid] == k){
            return mid;
        }

        else if(k<arr[mid]){
            right = mid - 1;
        }

        else{
            left = mid + 1;
        }
        mid = (left + right)/2;
    }
    return -1;
}

int main(){
    int arr[n];
    cout<<"Enter elements of array in sorted order";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key to search: ";
    cin>>key;
    cout<<binarySearch(arr, n, key);
    return 0;
}