#include<iostream>
using namespace std;
int main(){
    int arr[]= {1, 6, 2, 5};
    int temp;
    for(int i=0; i<4; i++){
        for(int j=0; j<4-i-1; j++){
            if(arr[j]> arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
            }
            for(int k=0; k<4; k++){
                cout<<arr[k]<<" ";
    }
    cout<<endl;
}
return 0;
}
