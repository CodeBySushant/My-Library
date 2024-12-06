// Not solved Yet
#include<iostream>
using namespace std;
int main(){
    int num;
    int rem;
    cout<<"Enter the number in decimal: ";
    cin>>num;
    cout<<num<<endl;
    for(int i=0; i<=num; i++){
        if(num>=0){
            rem = num % 2;
            cout<<rem;
        }
    }
    return 0;
}