#include<iostream>
using namespace std;
int main(){
    char letter;
    cout<<"Enter any word between (a-z) or (A-Z): ";
    cin>>letter;
    if(letter=='a'|| letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        cout<<"The letter is a vowel.";
    }
    else if(letter=='A'|| letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U'){
        cout<<"The letter is a vowel.";
    }
    else{
        cout<<"The letter is consonant.";
    }
}