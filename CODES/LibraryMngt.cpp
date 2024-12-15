#include<iostream>
using namespace std;
class LibrarySystem{
    private: 
    int id;
    string name;
    public:
    string book_name;
    int price;
    string author_name;

    void SetInfo(int id, string name){
        cout<<"Enter Your id number: ";
        cin>>id;
        cout<<"Enter you name: ";
        cin>>name;
    }

    void GetInfo{
        
    }

        int main(){
        LibrarySystem student;

        student.SetInfo();
        }
};
