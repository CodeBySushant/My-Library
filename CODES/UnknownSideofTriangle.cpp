#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cout<<"Enter first angle of Triangle: ";
    cin>>a;
    cout<<"Enter second angle of Triangle: ";
    cin>>b;
    cout<<"The unknown angle c of Triangle is: ";
    c = 180 - (a + b);
    cout<<c;
}