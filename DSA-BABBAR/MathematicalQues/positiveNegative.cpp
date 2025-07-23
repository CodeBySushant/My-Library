#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n>0){
        cout<<"It's positive";
    }
    else if(n<0){
        cout<<"It's negative";
    }
    else{
        cout<<"It's zero";
    }
    return 0;
} 