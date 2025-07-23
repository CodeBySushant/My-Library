#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n number to sum: ";
    cin>>n;
    int a = 1;
    int sum = 0;
    while(a<=n){
        sum = sum + a;
        a++;
    }
    cout<<"Sum of n number is: "<<sum;
}