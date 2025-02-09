/*
    Reverse Alternative Elements
    Initial Array: { 1 2 3 4 5 6}
    Output Array: {2 1 4 3 6 5}
*/

#include<iostream>
using namespace std;
//Function to print alternative elements
void printAlternative(int arr[], int size){
    int start = 0;
    int end = start + 1;

    //swapped alternative elements where i initialised start as 0 and end as 1 index and now after swapping these index moved to +2 index 
    for(int i=0; i<size; i++){
        swap(arr[start], arr[end]);
        start = start + 2;
        end = end + 2;
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
    cout<<"Elements in array is: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //Calling Alternative Reverse Function and Printing Alternative Reversed Array
    printAlternative(arr, size);
    cout<<"Reversed alternative elements are: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}