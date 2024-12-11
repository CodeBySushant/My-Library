#include<iostream>
using namespace std;
int main(){
    int n;
    float celsius, fahrenheit;
    cout<<"Enter: 1.Celsius to Fahrenheit"<<"\n"<<" 2.Fahrenheit to Celsius"<<"\n"<<" 3.Exit!"<<"\n";
    cin>>n;
    switch(n){
        case 1: 
            cout<<"Enter temperature in Celsius: ";
            cin>>celsius;
            fahrenheit = (celsius * 9.0/5) + 32;
            cout<<"The temperature in Fahrenheit is: "<<fahrenheit<<" F.";
            break;
        case 2:
            cout<<"Enter temperature in Fahrenheit: ";
            cin>>fahrenheit;
            celsius = (fahrenheit - 32) * 5.0/9;
            cout<<"The temperature in Celsius is: "<<celsius<<" C";
            break;
        case 3:
            cout<<"Exiting the program!";
            break;
        default:
            cout<<"Invalid input!";
    }
    return 0;
}
