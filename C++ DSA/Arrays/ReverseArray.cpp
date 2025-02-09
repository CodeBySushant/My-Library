#include<iostream>
using namespace std;
//Swap the position of array to reverse it
/*
    Initial array: 1 2 3 4 5
    1st step:      5 2 3 4 1  Swapped 1st and last element
    2nd step:      5 4 3 2 1  Swapped again while start is increased by 1 start++ and end is decreased by 1 end--
    last step:     5 4 3 2 1  Swapped remaining elements if any left
*/
void reverseArray(int arr[], int size){
    //Initializing starting and ending position of element for swapping
    int start = 0;
    int end = size - 1;

    //When condition true it swaps
    while (start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[100];
    cout<<"Enter elements in array: "; //Taking array elements as input
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"Elements in array: "; //Printing input array elements
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    reverseArray(arr, size); //call the reverse function
    cout<<"The reversed array is: "; //Now prints the reversed array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}