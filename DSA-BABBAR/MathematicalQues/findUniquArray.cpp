#include<iostream>
using namespace std;
int uniqueElement(int arr[], int n){
    int res = 0;
    for(int i=0; i<n; i++){
        res = res ^ arr[i];
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter size of array must be odd: ";
    cin>>n;
    int arr[100];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int result = uniqueElement(arr, n);
    cout<<"Unique element is: "<<result;
}