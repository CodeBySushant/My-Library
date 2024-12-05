/*Simple Number Pattern
            0 1 2 3 
            0 1 2 3 
            0 1 2 3 
            0 1 2 3 
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}