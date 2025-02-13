#include<iostream>
using namespace std;
int main(){
    int num, c100, c50, c20, c1;
    cout<<"Enter a number: ";
    cin>>num;

    int rem;
    // Input Cash in 100 50 20 1
    switch(1){
        case 1:
            c100 = num/100;
            num = num%100;
        case 2: 
            c50 = num/50;
            num = num%50;
        case 3:
            c20 = num/20;
            num = num%20;
        case 4:
            c1 = num/1;
            num = num%1;
    }
    cout<<"100: "<<c100<<endl<<"50: "<<c50<<endl<<"20: "<<c20<<endl<<"1: "<<c1;
    return 0;
}