#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter size of array: ";
    cin >> num;
    int arr[100];

    // Input array elements
    cout << "Enter elements of array: ";
    for(int i=0; i<num; i++){
        cin >> arr[i];
    }

    int rem1 = 0, rem2 = 0;

    // XOR of all array elements
    for(int i=0; i<num; i++){
        rem1 ^= arr[i];
    }

    // XOR of numbers from 1 to n-1
    for(int i=1; i<num; i++){
        rem2 ^= i;
    }

    int duplicate = rem1 ^ rem2;
    cout << "Duplicate element is: " << duplicate;
}
