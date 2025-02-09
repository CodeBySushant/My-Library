#include<iostream>
using namespace std;
//Function to sum all elements present in array
int sumOfarray(int arr[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + arr[i];
    }
    cout<<"Sum of Array is: "<<sum;
}
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[100];
    //Take input from user
    cout<<"Enter elements of array: ";
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    sumOfarray(arr, size);
}