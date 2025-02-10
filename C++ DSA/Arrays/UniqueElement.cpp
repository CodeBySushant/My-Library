#include<iostream>
using namespace std;
int uniqueElement(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
            ans = ans ^ arr[i]; //XOR which is cancelling same elements with its properties
        }
        return ans;
    }
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter elements in array: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<uniqueElement(arr, size); //Calling function
    return 0;
}