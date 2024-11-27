#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements in array a : ";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    cout<<"Elements in array a are : ";
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    int b[n];
    cout<<"Enter elements in array b : ";
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    cout<<"Elements in array b are : ";
    for(int i=0; i<n; i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    int a1 = sizeof(a)/sizeof(a[0]);
    int b1 = sizeof(b)/sizeof(b[0]);
    int c1 = a1 + b1;
    int c[c1];
    for(int i = 0; i<a1; i++){
        c[a1] = a[i];
    }
    for(int i = 0; i<b1; i++){
        c[a1+i] = b[i];
    }
    for(int i=0; i<c1; i++){
        cout<<c[i]<<" ";
    }
}