#include<iostream>
using namespace std;
void moveZeros(int arr[], int num){
    for(int i=0; i<num; i++){
        if(arr[i] == 0){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
        else{
            cout<<arr[i];
        }
    }

    for(int i=0; i<num; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[50];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    moveZeros(arr, n);
}