// Find closest Person
#include<iostream>
using namespace std;

int findClosest(int x, int y, int z) {
        int dist1 = 0;
        int dist2 = 0;
        if(x<z){
            for(int i = x; i < z; i++){
                dist1++;
            }
        }
        else if(x>z){
            for(int i=x; i>z; i--){
                dist1++;
            }
        }

        if(y<z){
            for(int i = y; i < z; i++){
                dist2++;
            }
        }
        else if(y>z){
            for(int i=y; i>z; i--){
                dist2++;
            }
        }

        if(dist1<dist2){
            return 1;
        }
        else if(dist1>dist2){
            return 2;
        }
        else {
            return 0;
        }
    }

int main(){
    int x;
    int y;
    int z;
    cout<<"Enter x, y, z: ";
    cin>>x>>y>>z;

    int result = findClosest(x, y, z);
    if(result == 1){
        cout<<"Person 1 is near";
    }
    else if(result == 2){
        cout<<"Person 2 is near";
    }
    else{
        cout<<"At same distance!";
    }
    return 0;
}