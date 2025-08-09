#include<iostream>
using namespace std;
int main(){
    int a = 4;
    int b = 6;

    cout<<"Operation of a&b is: "<<(a&b)<<endl;
    cout<<"Operation of a|b is: "<<(a|b)<<endl;
    cout<<"Operation of ~a is: "<<~a<<endl;
    cout<<"Operation of a^b is: "<<(a^b)<<endl;

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(19<<1)<<endl;
    cout<<(19>>2)<<endl;
}