// Leetcode Problem To check whether a number is Power of 3 or not
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    if(n<1){
        cout<<"Not a power of 3!";
        return 0;
    }
    while(n>1){
        int rem = n%3;
        if(rem!=0){
            cout<<"Not a power of 3!";
            return 0;
        }
        else{
            n = n/3;
        }
    }
    cout<<"It's power of 3!";
    return 0;
}