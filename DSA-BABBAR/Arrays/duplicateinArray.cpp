// Approach 2
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int rep = 0;
    for(int i=0; i<n; i++){
        rep = rep ^ arr[i];
    }
    
    for(int i=0; i<n; i++){
        rep = rep ^ arr[i];
    }

    cout<<"Duplicate element is :"<<rep;
    
}