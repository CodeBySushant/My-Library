#include<iostream>
using namespace std;
int main(){
    int a = 0;
    int sum = 0;
    int n;
    cin>>n;
    while(a<=n){
        sum = sum + a;
        a = a + 2;
    }
    cout<<sum;
}