#include<iostream>
using namespace std;
int main(){
    int n;
    float celsius, fahrenheit, kelvin;
    cout<<"Enter what you want to perform:"<<"\n"<<" 1.Celsius to Fahrenheit"<<"\n"<<" 2.Celsius to Kelvin"<<"\n"<<" 3.Fahrenheit to Celsius"<<"\n"<<" 4.Fahrenheit to Kelvin"<<"\n"<<" 5.Kelvin to Celsius"<<"\n"<<" 6.Kelvin to Fahrenheit"<<"\n";
    cin>>n;
    switch(n){
        case 1: 
            cout<<"Enter temperature in Celsius: ";
            cin>>celsius;
            fahrenheit = (celsius * 9.0/5) + 32;
            cout<<"The temperature in Fahrenheit is: "<<fahrenheit<<" F.";
            break;
        case 2:
            cout<<"Enter temperature in Celsius: ";
            cin>>celsius;
            kelvin = celsius + 273.15;
            cout<<"The temperature in Kelvin is: "<<kelvin<<" K.";
            break;
        case 3:
            cout<<"Enter temperature in Fahrenheit: ";
            cin>>fahrenheit;
            celsius = (fahrenheit - 32) * 5.0/9;
            cout<<"The temperature in Celsius is: "<<celsius<<" C.";
            break;
        case 4:
            cout<<"Enter temperature in Fahrenheit: ";
            cin>>fahrenheit;
            kelvin = (fahrenheit - 32) * 5 / 9 + 273.15;
            cout<<"The temperature in Kelvin is: "<<kelvin<<" K.";
            break;
        case 5:
            cout<<"Enter temperature in Kelvin: ";
            cin>>kelvin;
            celsius = kelvin - 273.15;
            cout<<"The temperature in Celsius is: "<<celsius<<" C.";
            break;
        case 6:
            cout<<"Enter temperature in Kelvin: ";
            cin>>kelvin;
            fahrenheit = (kelvin - 273.15) * 9.0/5.0 + 32;
            cout<<"The temperature in Fahrenheit is: "<<fahrenheit<<" F.";
            break;
        default:
            cout<<"Invalid input!";
    }
    return 0;
}
