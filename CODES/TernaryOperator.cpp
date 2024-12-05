// Finding a number is positive, negative or zero using Ternary Operator(Alternative of if, else)
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<(n > 0 ? "Positive" : n< 0 ? "Negative" : "Zero");
}