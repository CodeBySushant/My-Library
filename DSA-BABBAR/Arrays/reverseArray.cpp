#include<iostream>
#include<algorithm>
using namespace std;
void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    for(int i=0; i<n/2; i++){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout<<"Array after reverse: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements of array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array before reverse: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    reverseArray(arr, n);

    return 0;
}
