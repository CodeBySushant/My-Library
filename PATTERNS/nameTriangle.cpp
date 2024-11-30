/* Name Triangle using c++ :S
                            S U
                            S U S
                            S U S H 
                            S U S H A 
                            S U S H A N
                            S U S H A N T
                                             */
#include<iostream>
using namespace std;
int main(){
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    int n = name.length();
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<name[j]; //Stored name in array at lost to print words by words...
        }
        cout<<endl;
    }
    return 0;
}
