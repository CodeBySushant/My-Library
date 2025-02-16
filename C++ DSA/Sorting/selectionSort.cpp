#include<iostream>
#include<algorithm> //For using swap function
using namespace std;
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter elements in array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"The elements after sorted is: ";
    selectionSort(arr, size); //calling sorted array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}