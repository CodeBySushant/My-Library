#include<iostream>
using namespace std;
#define MAX 5

int top = -1;
int stack_arr[MAX];

void push(int data){
    if(top == MAX - 1){
        cout<<"Stack Overflow!";
        return;
    }
    top++;
    stack_arr[top] = data;
}

void pop(){
    int value;
    if(top == -1){
        cout<<"Stack is empty";
        return;
    }
    value = stack_arr[top];
    top--;
    cout<<"Popped value"<<value;
}

void peek(){
    if(top == -1){
        cout<<"Stack is empty";
        return;
    }
    cout<<stack_arr[top];
}

void print(){
    int i;
    for(i = top; i>=0; i--){
        cout<<stack_arr[i]<<endl;
    }
}

int main(){
    
    push(3);
    push(5);
    push(5);
    push(5);
    cout<<endl;
    pop();
    cout<<endl;
    peek();
    cout<<endl;
    print();
    return 0;
}