#include<iostream>
using namespace std;
int main(){
    int fahr, celc;
    cout<<"Enter fahrenheit: ";
    cin>>fahr;
    celc = (fahr - 32) * 5/9;
    cout<<"Temperature in celcius is: "<<celc;
}