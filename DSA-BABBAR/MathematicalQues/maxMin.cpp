#include<iostream>
using namespace std;

int checkMax(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]>arr[i+1]){
            return arr[i];
        }
    }
}

int checkMin(int arr[], int n){
    for(int i=0; i<n; i++){
        if(arr[i]<arr[i+1]){
            return arr[i];
        }
    }
}

int main(){
    int arr[5];
    cout<<"Enter elements in array: ";
    for(int i=0; i<5; i++){
        cin>>arr[i];
    }
    int max = checkMax(arr, 5);
    cout<<"Max element is: "<<max<<endl;
    int min = checkMin(arr, 5);
    cout<<"Min element is: "<<min<<endl;
}