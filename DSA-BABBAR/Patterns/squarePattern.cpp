#include<iostream>
using namespace std;
/* int main(){
    int n;
    cout<<"Enter no. of rows & cols: ";
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
} */

//using while loop
int main(){
    int n;
    cout<<"Enter no. of rows & cols: ";
    cin>>n;
    int i = 0;
    while(i<n){
        int j=0;
        while(j<n){
            cout<<" *";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}