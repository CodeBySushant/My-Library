#include<iostream>
using namespace std;

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

/*
int main(){
    string name;
    cout << "Enter your name: ";
    cin>>name;
    cout<<"Your name is: "<<name;
    cout<<endl;
    cout<<name.size();
} */

//Now using character Array
int main(){
    char name[100];
    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Your name is: "<<name;
    cout<<endl;
    cout<<"The length of Name is: "<<getLength(name);
}