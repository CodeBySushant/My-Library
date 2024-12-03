#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter value of a: "<<endl;
    cin>>a;
    cout<<"Enter value of b: "<<endl;
    cin>>b;
    char op;
    cout<<"Enter any operation which you want to perform(+, -, *, /): ";
    cin>>op;
    switch(op){
        case '+':
        cout<<"Addition of a & b is: "<<a+b;
        break;
        case '-':
        cout<<"Substraction of a & b is: "<<a-b;
        break;
        case '*':
        cout<<"Multiplication of a & b is: "<<a*b;
        break;
        case '/':
        cout<<"Division of a & b is: "<<a/b;
        break;
        default:
        cout<<"Invalid operation";
    }
    return 0;
}