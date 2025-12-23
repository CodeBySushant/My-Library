#include<iostream>
using namespace std;
int tribonacci(int n){
    if(n==0) return 0;
    if(n<=2) return 1;
    return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int ans = tribonacci(n);
    cout<<ans;
}