//Leetcode Question
#include<iostream>
using namespace std;
string intoLower(string s){
    if(s>="a" && s<="z"){
        return s;
    }
    else{
        string temp = s - "A" + "a";
        return temp;
    }
}
int main(){
    string s;
    cout<<"Enter a string:";
    cin>>s;
    cout<<s;
}