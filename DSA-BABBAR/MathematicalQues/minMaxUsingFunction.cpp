#include<iostream>
using namespace std;
int minUsingFn(int arr[], int n){
    int result = arr[0];
    for(int i=0; i<n; i++){
        result = min(result, arr[i]);
    }
    return result;
}

int maxUsingFn(int arr[], int n){
    int result = arr[0];
    for(int i=0; i<n; i++){
        result = max(result, arr[i]);
    }
    return result;
}

int main(){
    int num;
    cout<<"Enter size of array: ";
    cin>>num;
    int arr[100];
    for(int i=0; i<num; i++){
        cin>>arr[i];
    }
    cout<<"Min element is: "<<minUsingFn(arr, num)<<endl;
    cout<<"Max element is: "<<maxUsingFn(arr, num)<<endl;
}