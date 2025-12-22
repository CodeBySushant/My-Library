#include <iostream>
using namespace std;
void countName(int i, int n)
{
    if(i>n){
        return;
    }
    cout<<"Sushant"<<endl;
    countName(i+1, n);
}
int main()
{
    int n;
    cout << "Enter number of times to print: ";
    cin >> n;
    countName(1, n);
    return 0;
}