#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    int i=0; int ans=0;
    while(n!=0){
        int bit = n&1;
        if(bit == 1){
            ans = ans + pow(2, i);
            n = n>>i;
        }
        i++;
    }
    cout<<"Decimal is : "<<ans;
}