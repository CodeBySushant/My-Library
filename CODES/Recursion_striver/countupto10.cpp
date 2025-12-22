#include<iostream>
using namespace std;
void counter(int count){
    if(count==10){
        return;
    }
    cout<<count<<endl;
    count++;
    counter(count);
}
int main(){
    int count;
    count = 0;
    counter(count);
    return 0;
}