#include<iostream>
using namespace std;
int isCube(int n){
    cout<<"The cube of given number is: ";
    cout<<n*n*n;
};
int main(){
    int num;
    cout<<"Enter the number you want to cube: ";
    cin>>num;
    isCube(num);
}