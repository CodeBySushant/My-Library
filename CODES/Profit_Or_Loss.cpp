#include<iostream>
using namespace std;
int main(){
    float CP, SP, Profit, Loss;
    cout<<"Enter Cost Price of Product: ";
    cin>>CP;
    cout<<"Enter Selling Price of Product: ";
    cin>>SP;
    Profit = SP - CP;
    Loss = CP - SP;
    if(CP>SP){
        cout<<"Loss of "<<Loss<<" Rupees";
    }
    else if(SP>CP){
        cout<<"Profit of "<<Profit<<" Rupees";
    }
    else{
        cout<<"No Profit No Loss";
    }
    return 0;
}