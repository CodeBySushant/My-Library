#include<iostream>
using namespace std;

// Approach 1
/* bool powerofTwo(int n){
    if(n>=0){
        if(n%2 != 0){
            return false;
        }
        else{
            return true;
        }
    }
    else{
        return false;
    }
} */

// Approach 2
bool powerofTwo(int n){
    if(n<=0){
        return false;
    }
    else {
        if((n & (n-1)) == 0){
            return true;
        }
        else{
            return false;
        }
    }
}

int main(){
    int n;
    cout<<"Enter an element: ";
    cin>>n;
    int result = powerofTwo(n);
    if(result==true){
        cout<<"Power of two.";
    }
    else{
        cout<<"Not a power of 2!";
    }
    return 0;
}