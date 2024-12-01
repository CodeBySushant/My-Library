// Program to check whether he/she is eligible to Drive or not
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<=18 || age>=60){
        cout<<"You are not eligible for driving!";
    }
    else{
        cout<<"You are eligible for driving.";
    }
    return 0;
}