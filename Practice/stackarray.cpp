#include<iostream>
using namespace std;
#define MAX 4

int stack_arr[MAX];
int Top = -1;

//Push into Stack
void push(int data){
    if(Top == MAX - 1){
        cout<<"Stack Overflow!";
    }
    Top++;
    stack_arr[Top] = data;
}

//Pop Top element from stack
void pop(){
    int value;
    if(Top == -1){
        cout<<"Stack Underflow!";
    }
    value = stack_arr[Top];
    Top--;
    cout << "Popped: " << value << "\n";
}

//Prints Top element
void top(){
    if(Top == -1){
        cout<<"Stack Underflow!";
    }
    cout<<"Top element is: "<<stack_arr[Top];
}

//Print element present in stack
void print(){
    int i;
    if(Top == -1){
        cout << "Stack is empty.\n";
        return;
    }
    cout<<"Elements present in stack are: ";
    for(i=Top; i>=0; i--){
        cout<<stack_arr[i]<<"\n";
    }
}

//main function
int main(){
    int choice;
    int data;
    while(1){
        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Print Top element\n";
        cout<<"4. Print all elements of stack\n";
        cout<<"5. Quit\n";
        cout<<"Enter you're choice: ";
        cin>>choice;

    switch(choice){
        case 1:
            cout<<"Enter the element to be pushed: ";
            cin>>data;
            push(data);
            break;
        case 2:
            pop();
            break;
        case 3:
            top();
            break;
        case 4:
            print();
            break;
        case 5:
            cout<<"Program Closed!";
            exit(0);
        default:
            cout<<"Invalid Choice!!";
        }
    }
    return 0;
}