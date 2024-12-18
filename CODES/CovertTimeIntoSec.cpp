#include<iostream>
using namespace std;
int main(){
    int hour, min, sec;
    cout<<"Enter Time: ";
    cout<<"In hour: ";
    cin>>hour;
    cout<<"In minute: ";
    cin>>min;
    sec = hour * 60 * 60 + min * 60;
    cout<<"The entered Time of Hour and Min is: "<<sec;

}