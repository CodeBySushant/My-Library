#include<iostream>
using namespace std;
int main(){
    int a[] = {1, 2, 3};
    int b[] = {12, 52, 6};

    int a1 = sizeof(a)/sizeof(a[0]);
    int b1 = sizeof(b)/sizeof(b[0]);

    int c1 = a1 + b1;
    int* c = new int [c1];
    for(int i=0; i<a1; i++){
        c[i] = a[i];
    }
    for(int i=0; i<b1; i++){
        c[a1+i] = b[i];
    }
    for(int i=0; i<c1; i++){
        cout << c[i] << " ";
    }
    return 0;
}