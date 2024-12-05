#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    if(n<=1){
        cout<<"Not a prime number!";
    }
    else if(n==2){
        cout<<"Prime number!";
    }
    else{
        bool isPrime = true;
        for(int i=2; i<n; i++){
            if(n%i==0){
                cout<<"Not a prime number!";
                isPrime = false;
                break;
            }
        }
        if(isPrime){
                cout<<"Prime number!";
            }
    }
    return 0;
}