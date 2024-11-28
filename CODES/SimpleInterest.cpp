#include<iostream>
using namespace std;
int Simple_Interest(int P, int R, int T){
    int SI = (P*R*T)/100;
    cout<<"The Simple Interest is: "<<SI;
}
int main(){
    double Principle;
    int Time;
    float Rate;
    cout<<"Enter the Principle:"<<endl;;
    cin>>Principle;
    cout<<"Enter Time in Years: "<<endl;
    cin>>Time;
    cout<<"Enter the Rate: "<<endl;
    cin>>Rate;
    Simple_Interest(Principle, Rate, Time);
}