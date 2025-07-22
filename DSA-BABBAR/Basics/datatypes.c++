#include<iostream>
using namespace std;

int main(){
    int a = 5;
    cout<<a<<endl;

    float b = 5.5;
    cout<<b<<endl;

    double c = 5.5555;
    cout<<c<<endl;

    char d = 'A';
    cout<<d<<endl;

    bool e = true;
    cout<<e<<endl;

    //Size of data types:
    int size1 = sizeof(a);    
    int size2 = sizeof(b);
    int size3 = sizeof(c);
    int size4 = sizeof(d);
    int size5 = sizeof(e);
    cout<<"Size of a is: "<<size1<<endl;
    cout<<"Size of b is: "<<size2<<endl;
    cout<<"Size of c is: "<<size3<<endl;
    cout<<"Size of d is: "<<size4<<endl;
    cout<<"Size of e is: "<<size5<<endl;

    return 0;
}