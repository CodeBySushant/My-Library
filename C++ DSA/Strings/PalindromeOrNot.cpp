#include<iostream>
using namespace std;
void checkPalindrome(char word[], int n){
    int start = 0;
    int end = n-1;
    bool isPalindrome = true;
    while(start<=end){
        if(word[start]!=word[end]){
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }
    if (isPalindrome) {
        cout << "It is a palindrome!" << endl;
    } else {
        cout << "It is not a palindrome!" << endl;
    }
}
int main(){
    char word[100];
    cout<<"Enter any word to check palindrome or not: ";
    cin>>word;

    int length = 0;
    while (word[length] != '\0') {
        length++;
    }

    checkPalindrome(word, length);
}