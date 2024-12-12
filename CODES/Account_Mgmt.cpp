#include<iostream>
#include<string>
using namespace std;
class BankAccount{
    private:
    string AccountNumber;
    string AccountHolderName;
    float Balance;

    public:
    void InputDetails(){
        cout<<"Enter Account Number: ";
        cin>>AccountNumber;
        while (AccountNumber.length() != 8) {
            cout << "Account Number must be exactly 16 digits. Please try again: ";
            cin >> AccountNumber;
        }
        cin.ignore();
        cout<<"Enter Account Holder Name: ";
        getline(cin, AccountHolderName);
        cout<<"Enter Balance: ";
        cin>>Balance;
        cout<<endl;
    }
    void Deposit(){
        float amount;
        cout<<"Enter amount to deposit: ";
        cin>>amount;
        Balance = Balance + amount;
        cout<<endl;
    }
    void Withdraw(){
        float amount;
        cout<<"Enter amount to withdraw: ";
        cin>>amount;
        if(amount<Balance){
        Balance = Balance - amount;
        }
        else{
            cout<<"Insufficient Balance"<<endl;
        }
        cout<<endl;
    }
    void ShowDetails(){
        cout<<"Account Number: "<<AccountNumber<<endl;
        cout<<"Account Holder Name: "<<AccountHolderName<<endl;
        cout<<"Account Balance: "<<Balance<<" Rs"<<endl;
        cout<<endl;
    }
    
};

int main(){
    int n;
    BankAccount Customer1;
    while(true){
    cout<<"Enter what you want to perform: "<<endl;
    cout<<"1. Enter New Customer Account Details"<<endl;
    cout<<"2. Deposit Amount"<<endl;
    cout<<"3. WithDraw Amount"<<endl;
    cout<<"4. Show Existing Customer Details"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<endl;
    cin>>n;
    

    if(n>=1 && n<=5){
        if(n==1){
            Customer1.InputDetails();
        }
        else if(n==2){
            Customer1.Deposit();
        }
        else if(n==3){
            Customer1.Withdraw();
        }
        else if(n==4){
            Customer1.ShowDetails();
        }
        else{
            cout<<"Exiting Program!";
            break;
        }
    }
    else{
        cout<<"Invalid choice"<<endl;
    }
    
    }
}
