#include<iostream>
using namespace std;
void ntoOne(int i, int n){
    if(n<i){
        return;
    }
    cout<<n<<endl;
    ntoOne(i, n-1);
}
int main(){
    int n, i;
    i=1;
    cout<<"Enter n: ";
    cin>>n;
    ntoOne(i, n);
    return 0;
}