#include<iostream>
using namespace std;

int binarySearch(int n, int arr[], int key){
    int s=0;
    int e=n;
    while(s<=e){
        int mid = (s + e)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1;
}


int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter element which you want to search in arrray: ";
    cin>>key;

    cout<<"The index of element present in array is: ";
    cout<<binarySearch(n, arr, key);

delete[] arr;
return 0;
}