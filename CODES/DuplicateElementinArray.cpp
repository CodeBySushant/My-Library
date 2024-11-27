#include<iostream>
using namespace std;

void findDuplicate(int n, int arr[]){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" is a duplicate element in the array"<<endl;
                break;
            }
        }
    }
};
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin >> n;
    int* arr = new int [n];
    cout<<"Enter the elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The elements in array are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    findDuplicate(n, arr);
    return 0;
}