#include<iostream>
using namespace std;
int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

void reverseString(char name[], int len){
    int start =0;
    int end = len-1;
    while(start<=end){
        swap(name[start++], name[end--]);  //Swapping with every iteration 
    }
}
int main(){
    char name[20];
    cout<<"Enter your name: "; 
    cin>>name;
    int len = getLength(name);
    reverseString(name, len); //Calling Reverse Function
    cout<<name; //Printed reversed char array
}