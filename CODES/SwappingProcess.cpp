#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Values before swap: ";
    cout<<a<<" "<<b;
    cout<<endl;

                         // Swap using bitwise xor:
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<<"Values after swap: ";
    cout<<a<<" "<<b;

    /*                  Swap using Arithmetic operator
    a = a + b;
    b = a - b;
    a = a - b;
    cout<<"Values after swap: ";
    cout<<a<<" "<<b;
    */



    /*                  Swapping using temporary variable:
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout<<"Values after swap: ";
    cout<<a<<" "<<b;
    */

}