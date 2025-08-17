#include<iostream>
using namespace std;

void sortArray(int arr[], int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
    cout<<"Elements in array are: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int binarySearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter key to search: ";
    cin>>key;
    sortArray(arr, n);
    cout<<endl;
    int result = binarySearch(arr, n, key);
    cout<<"Index of element is : "<<result;
}