#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int array[n];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    // Size of array
    int arraySize = sizeof(array)/sizeof(int);
    cout<<"Size of array is: "<<arraySize;
}