#include<iostream>
using namespace std;
void inputArray(int arr[], int n){
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<"Elements in array are: "<<arr[i]<<" "<<endl;
    }
}

int main(){
    int array[10];
    inputArray(array, 10);
    printArray(array, 10);
}