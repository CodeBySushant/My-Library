#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter an number: ";
    cin>>n;
    cout<<"Number in decimal is: "<< n << endl;
    int ans = 0;
    int i = 0;
    while (n != 0) {
        int bit = n&1;
        ans = (bit * pow(10, i)) + ans;
        n = n>>1;
        i++;
    }
    cout<<"Binary is: "<<ans;
    return 0;
}