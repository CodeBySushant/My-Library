#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n number to sum: ";
    cin>>n;
    int a = 0;
    int b = 1;
    for(int i=0; i<n; i++){
        int sum = a+b;
        a=b;
        b=sum;
        cout<<sum<<" ";
    }
}