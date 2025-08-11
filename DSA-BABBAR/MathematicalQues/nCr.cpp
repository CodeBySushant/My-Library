// Finding nCr
#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r){
    int result;
    result = factorial(n) / (factorial(r) * factorial(n-r));
    return result;
}

int main(){
    int num, r;
    cin>>num>>r;
    cout<<nCr(num, r);
}