// This is a program to find area and perimeter of circle using OOPs concept.

#include<iostream>
#define pi 3.14
using namespace std;
class Circle{
private:
    int radius;
public:
    void getRadius(){
        cout<<"Enter the value of radius: ";
        cin>>radius;
    }
    void AreaofCircle(){
        cout<<"Area of circle is: "<<pi*radius*radius<<endl;
    }
    void PerimeterofCircle(){
        cout<<"Perimeter of circle is: "<<2*pi*radius<<endl;
    }
};
int main(){
    Circle c1;
    Circle c2;
    Circle c3;

    c1.getRadius();
    c1.AreaofCircle();
    c1.PerimeterofCircle();

    c2.getRadius();
    c2.AreaofCircle();
    c2.PerimeterofCircle();

    c3.getRadius();
    c3.AreaofCircle();
    c3.PerimeterofCircle();

    return 0;
}