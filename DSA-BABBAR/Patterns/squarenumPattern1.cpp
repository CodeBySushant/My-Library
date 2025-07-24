#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows and cols: ";
    cin>>n;
    int i=0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}