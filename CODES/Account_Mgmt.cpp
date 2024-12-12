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
    void Withdraw(){
        float amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        Balance = Balance - amount;
    }
    void ShowDetails(){
        cout<<"Account Number: "<<AccountNumber<<endl;
        cout<<"Account Holder Name: "<<AccountHolderName<<endl;
        cout<<"Account Balance: "<<Balance<<endl;
    }
    void Exit(){
        cout<<"Exiting Program!";
    }
};

int main(){
    int n;
    cout<<"Enter what you want to perform: "<<endl;
    cout<<"1. Enter New Customer Account Details"<<endl;
    cout<<"2. Deposit Amount"<<endl;
    cout<<"3. WithDraw Amount"<<endl;
    cout<<"4. Show Existing Customer Details"<<endl;
    cout<<"5. Exit"<<endl;
    cin>>n;
    BankAccount Customer1;

    
    Customer1.InputDetails();
    Customer1.Deposit();
    Customer1.Withdraw();
    Customer1.ShowDetails();
    Customer1.Exit();
}
