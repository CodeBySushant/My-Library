#include<iostream>
#include<string>

using namespace std;
int main(){
    string str, reversed;
    cout<<"Enter any word: ";
    cin>>str;

    for (int i = str.length() - 1; i >= 0; i--) {   //Reverse every single letter from word
        reversed += str[i];
    }

    cout<<"The reverse of that word is: ";
    cout<<reversed;
}
