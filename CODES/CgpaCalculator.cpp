// To calculate cgpa from sgpa
#include<iostream>
using namespace std;
int main(){
    int arr[8];
    int sum = 0;
    for(int i=0; i<8; i++){
        if(arr[i]>0 || arr[i]<10){
            cout<<"Enter you Semester "<<i+1<<" SGPA (0-10): ";
            cin>>arr[i];
            sum = sum + arr[i]; //Adds elements of array
        }
        else{
        cout<<"Invalid input"<<endl;
        }
    }
    int cgpa = sum / 8;
    cout<<"Your cgpa is: ";
    cout<<cgpa;
    return 0;
}