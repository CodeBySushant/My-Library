#include<iostream>
using namespace std;
#define max 4
int stack[max];
int top = -1;

void push(int data){
    if(top == max - 1){
        cout<<"Stack overflow";
    }
    top++;
    stack[top] = data;
}

void pop(){
    if(top == -1){
        cout<<"Stack underflow";
    }
    top--;
}

void peek(){
    if(top == -1){
        cout<<"stack underflow";
    }
    cout<<stack[top];
}

void print(){
    for(int i=top; i>=0; i--){
        cout<<stack[i];
        cout<<endl;
    }
}
int main(){
    push(5);
    push(3);
    push(2);
    cout<<endl;
    pop();
    cout<<endl;
    peek();
    cout<<endl;
    print();
}