/*  
         * * * * *   
         * * * *
         * * *
         * *
         * 
         * * 
         * * * 
         * * * * 
         * * * * *
*/

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    for(int i=0; i<num; i++){  //Loop for 1st half of triangle
        for(int j=num; j>i; j--){
            cout<<"* ";
        }
        cout<<endl;
    }
     for (int i = 2; i <= num; ++i) { // Start with 2 stars in the first row
        for (int j = 1; j <= i; ++j) { // Print stars in each row
            cout << "* ";
        }
        cout << endl; // Move to the next line after each row
    }
    return 0;
}