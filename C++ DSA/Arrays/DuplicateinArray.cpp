#include<iostream>
using namespace std;
int duplicateElements(int arr[], int size){
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                return arr[i];
            }   
        }
    }
    return -1;
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
    cout<<"Elements in array are: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<duplicateElements(arr, size);
}