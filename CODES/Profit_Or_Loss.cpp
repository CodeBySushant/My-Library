#include<iostream>
using namespace std;
int main(){
    int CP, SP, Profit, Discount, MP;
    cout<<"Enter Cost Price of Product: ";
    cin>>CP;
    cout<<"Enter Selling Price of Product: ";
    cin>>SP;
    if(CP>SP){
        cout<<"Loss of "<<CP-SP<<" Rupees";
    }
    else if(SP>CP){
        cout<<"Profit of "<<SP-CP<<" Rupees";
    }
    else{
        cout<<"No Profit No Loss";
    }
}