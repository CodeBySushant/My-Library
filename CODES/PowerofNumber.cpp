#include<iostream>
using namespace std;
int main(){
    int num, power;
    cout<<"Enter any number: ";
    cin>>num;
    cout<<"Enter power required of the given number: ";
    cin>>power;
    int result = 1;
    for(int i=0; i<power; i++){
        result = result * num;
    }
    cout<<result;
}