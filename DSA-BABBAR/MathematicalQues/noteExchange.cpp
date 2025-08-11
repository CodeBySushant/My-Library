#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    int w, x, y, z;
    switch(1){
        case 1: 
        w = num / 100;
        cout<<"Number of 100's: "<<w<<endl;
        num = num % 100;
        case 2:
        x = num / 50;
        cout<<"Number of 50's: "<<x<<endl;
        num = num % 50;
        case 3:
        y = num / 20;
        cout<<"Number of 20's: "<<y<<endl;
        num = num % 20;
        default:
        z = num / 1;
        cout<<"Number of 1's: "<<z<<endl;
    }
    return 0;
}