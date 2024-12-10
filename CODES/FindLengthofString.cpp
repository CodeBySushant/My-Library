#include<iostream>
using namespace std;
int main(){
    string line;
    cout<<"Enter a sentence: ";
    getline(cin, line);
    cout<<line.length(); //Or we can also use word.size() instead of length
}