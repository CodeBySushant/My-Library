#include<iostream>
using namespace std;

int sumOfElement(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }
    return sum;
}

int main(){
    int arr[100];
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int result = sumOfElement(arr, n);
    cout<<"Sum of elements in array is: "<<result;
}