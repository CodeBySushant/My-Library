// University Marking System Program For Printing Grade
#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter your marks between (0-100): ";
    cin>>marks;
    if(marks>=0 || marks<=100){
        if(marks>=80){
            cout<<"Grade: A";
        }
        else if(marks>=60 && marks<80){
            cout<<"Grade: B";
        }
        else if(marks>=40 && marks<60){
            cout<<"Grade: C";
        }
        else{
            cout<<"Failed";
        }
    }
    else{
        cout<<"Invalid marks";
    }
    return 0;
}