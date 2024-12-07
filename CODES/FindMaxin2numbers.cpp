#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the value of 1st & 2nd number: ";
    cin>>a>>b;
    int max;
    if(a>b){
        max = 1;
    }
    else if(b>a){
        max = 2;
    }
    else if(a==b || b==a){
        max = 3;
    }
    else{
        max = 0;
    }
    switch(max){
        case 0:
        cout<<"Invalid input!";
        break;
        case 1:
        cout<<"First value is maximum";
        break;
        case 2:
        cout<<"Second value is maximum";
        break;
        case 3:
        cout<<"Both are same";
        break;
    }
}