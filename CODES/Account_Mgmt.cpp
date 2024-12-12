#include<iostream>
using namespace std;
class BankAccount{
    private:
    int AccountNumber;
    string AccountHolderName;
    float Balance;

    public:
    void InputDetails(){
        cout<<"Enter Account Number: ";
        cin>>AccountNumber;
        cout<<"Enter Account Holder Name: ";
        cin>>AccountHolderName;
        cout<<"Enter Balance: ";
        cin>>Balance;
        cout<<endl;
    }
    void Deposit(){
        float amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        Balance = Balance + amount;
    }
    void ShowDetails(){
        cout<<"Account Number: "<<AccountNumber<<endl;
        cout<<"Account Holder Name: "<<AccountHolderName<<endl;
        cout<<"Account Balance: "<<Balance<<endl;
    }
};

int main(){
    BankAccount obj1;
    obj1.InputDetails();
    obj1.Deposit();
    obj1.ShowDetails();
}
