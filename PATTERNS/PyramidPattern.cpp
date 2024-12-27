#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter pyramid height: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        // 1st Loop for printing spaces
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        // 2nd Loop for printing stars
        for(int k=1; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}