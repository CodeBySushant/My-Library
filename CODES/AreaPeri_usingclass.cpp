#include<iostream>
using namespace std;
class Rectangle{
    private: 
    int length;
    int breadth;

    public:
    void getData(){
        cout<<"Enter length and breadth: ";
        cin>>length>>breadth;
    }
    void setData(int l, int b){
        length = l;
        breadth = b;
    }
    void displayData(){
        cout<<"The length is: "<<length<<endl;;
        cout<<"The breadth is: "<<breadth<<endl;
    }
    void areaPeri(){
        int area, perimeter;
        area = length * breadth;
        perimeter = 2 * (length + breadth);
        cout<<"The area is: "<<area<<endl;
        cout<<"The perimeter is: "<<perimeter<<endl;
        cout<<endl;
    }
};

int main(){
    Rectangle r1, r2, r3;
    r1.getData();   //To get length and breadth from user
    r1.displayData();
    r1.areaPeri();

// For this i dont need to enter value as i have already give value in parentherized
    r2.setData(20, 36); //Set data of length and breadth
    r2.displayData();   //Display given data
    r2.areaPeri();  //Calls member function doing this operation

    r3.getData();
    r3.displayData();
    r3.areaPeri();
}
