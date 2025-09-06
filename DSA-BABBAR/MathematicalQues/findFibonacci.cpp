#include<iostream>
using namespace std;
int findFibonacci(int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + i;
    }
}

int main(){
    int n;
    cout<<"Enter a position in series: ";
    cin>>n;
    int result = findFibonacci(n);
    cout<<result;
}