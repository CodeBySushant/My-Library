#include<iostream>
using namespace std;
void linearPrint(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    linearPrint(i+1, n);
}
int main(){
    int n, i=1;
    cout<<"Enter n: ";
    cin>>n;
    linearPrint(i, n);
    return 0;
}