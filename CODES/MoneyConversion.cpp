#include<iostream>
using namespace std;
void usdToinr(float usd, float inr){
    cout<<"Enter the amount in USD: ";
    cin>>usd;
    inr = usd * 84.80;
    cout<<inr;
}
void usdTonpr(float usd, float npr){
    cout<<"Enter the amount in USD: ";
    cin>>usd;
    npr = usd * 135.52;
    cout<<npr;
}
int main(){
    int num;
    float usd, inr, npr;
    cout<<"Conversion from: "<<"\n";
    cout<<"1) Dollar to INR"<<"\n";
    cout<<"2) Dollar to NPR"<<"\n";
    cin>>num;
    if(num>=1){
        if(num==1){
            cout<<"The value of entered amount in INR is: ";
            usdToinr(usd, inr);
        }
        else if(num==2){
            cout<<"The value of entered amount in NPR is: ";
            usdTonpr(usd, npr);
        }
        else{
            cout<<"Invalid input!";
        }
    }
    return 0;
}