#include<iostream>
using namespace std;
int main(){
    int CP, SP, Profit, Loss;
    cout<<"Enter you're cost price: ";
    cin>>CP;
    cout<<"Enter you're selling price: ";
    cin>>SP;
    if(CP>SP){
        cout<<"You got Loss.";
    }
    else if(CP<SP){
        cout<<"You got Profit.";
    }
    else{
        cout<<"No Profit! No Loss!";
    }
}