#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    switch(n){
        case 1: cout<<"Samosa";
            break;
        case 2: cout<<"Pani Puri";
            break;
        case 3: cout<<"Rasmalai";
            break;
        case 4: cout<<"Kaju Katli";
            break;
        default: cout<<"I don't like any of these";
    }
}