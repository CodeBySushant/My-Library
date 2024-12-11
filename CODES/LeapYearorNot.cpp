#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if((year%4==0 && year % 100 != 0)|| (year % 400 == 0)){
        cout<<"Its a leap year!";
    }
    else{
        cout<<"Its not a leap year!";
    }
    return 0;
}