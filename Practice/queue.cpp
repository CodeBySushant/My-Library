#include<iostream>
using namespace std;
#define max 5

int queue[max];
int front = -1;
int rear = -1;

void enqueue(int n){
    if(rear == max-1){
        cout<<"Overflow";
    }
    else if(front == -1 && rear == -1){
        front = 0;
        rear = 0;
        queue[rear] = n;
    }
    else{
        rear++;
        queue[rear] = n;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        cout<<"Underflow";
    }
    else if(front == rear){
        front = rear = -1;
    }
    else{
        cout<<queue[front];
        front++;
    }
}

void display(){
    int i;
    if(front == -1 && rear == -1){
        cout<<"Queue is empty";
    }
    else{
        for(i=front; i<=rear; i++){
        cout<<queue[i];
        }
    }
    
}


int main(){
    enqueue(2);
    enqueue(4);
    peek();
    dequeue();
    display();
}