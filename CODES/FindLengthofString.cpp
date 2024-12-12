#include<iostream>
#include<string>
using namespace std;
int main(){
    string line;
    cout<<"Enter a sentence: ";
    getline(cin, line); //Takes whole line as input
    cout<<line.length(); //Or we can also use word.size() instead of length
}