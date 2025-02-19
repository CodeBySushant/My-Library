#include<iostream>
using namespace std;
void bubbleSort(int arr[], int n){   //Bubble sort program
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){  
        cin>>arr[i];
    }
    bubbleSort(arr, n);  //calling sorted array
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}