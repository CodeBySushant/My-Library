#include<iostream>
#include<algorithm>
using namespace std;
#define n 5

int main(){
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout<<"Elements in array are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
        cout<<endl;
    }
    return 0;
}