#include<iostream>
using namespace std;

bool isEven(int num){
    if(num&1){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int result;
    result = isEven(n);
    if(result==0){
        cout<<"Odd"<<endl;
    }
    else{
        cout<<"Even";
    }
    return 0;
}