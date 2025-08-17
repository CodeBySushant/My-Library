#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    vector<int>v;
    cout<<"Enter size of vector: ";
    cin>>n;

    cout<<"Enter elements inside vector: ";
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    for(int i=0; i<n; i++){
        cout<<"Elements in vector are: ";
        cout<<v[i]<<endl;
    }
}