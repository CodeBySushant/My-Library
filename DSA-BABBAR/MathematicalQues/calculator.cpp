#include<iostream>
using namespace std;
int main(){
    int a, b;
    char ch;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter another number: ";
    cin>>b;
    cout<<"Enter operation to perform (+, -, *, /): ";
    cin>>ch;
    switch(ch){
        case '+': cout<<"Sum is: "<<(a+b);
        break;
        case '-': cout<<"Diff is: "<<(a-b);
        break;
        case '*': cout<<"Multiplication is: "<<(a*b);
        break;
        case '/': cout<<"Division is: "<<(a/b);
        break;
        default: cout<<"Not a valid input!";
    }
    return 0;
}