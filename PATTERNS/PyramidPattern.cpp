#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Rows: ";
    cin>>n;
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i; j++){
            cout<<" ";
    }
    cout<<endl;
}
}