// Power of a number program using Function
#include<iostream>
using namespace std;
int pow(int n, int i){
    int result = 1;
    for(int j=1; j<=i; j++){
        result = n * result;
    }
    return result;
}
int main(){
    int n;
    cout<<"Enter base number: ";
    cin>>n;
    int i;
    cout<<"Enter power of base: ";
    cin>>i;
    int result;
    result = pow(n, i);
    cout<<result;
}