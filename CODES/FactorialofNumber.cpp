#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number whose factorial you need: ";
    cin>>num;
    int fact = 1;
    for(int i=1; i<=num; i++){
        fact = fact * i;
    }
    if(num<0){
        cout<<"Can't get factorial of negative numbers.";
    }
    else{
        cout<<"Factorial of "<<num<<" is "<<fact;
    }
    return 0;
}