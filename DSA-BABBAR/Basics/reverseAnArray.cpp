#include<iostream>
using namespace std;
void reverseArray(int arr[], int n){
    int start = 0;
    int end = n - 1;
    while(start<=end){
        swap(arr[start++], arr[end--]);
    }
    
    for(int i=0; i<n; i++){
        cout<<"Elements are: "<<arr[i]<<" ";
    }
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

    reverseArray(arr, n);
}