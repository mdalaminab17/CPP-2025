#include <iostream>
using namespace std;

class Account{
    public:
    string name;
    string type;
    int number;
    int interestRate;
    double minumum = 500.00;
    double balance = 0.00;
    double depotitAmount;
    double withdrawAmount;

    void get(string n, string t, int a){
        name = n;
        type = t;
        number = a;


    }

    void deposit(){
        cout << "Enter Deposit Amount" <<endl;
        cin>> depotitAmount;
        balance = balance + depotitAmount;
        cout << "Your Balnce is: " << balance <<endl;
    }
    void withdraw(){
        cout << "Enter Withdraw Ammount: " <<endl;
        cin>> withdrawAmount;

        balance = balance - withdrawAmount;
        if (balance < 0){
            cout << "Insufficient Balance" <<endl;
        }
        else{
            cout << "Your Balance is: " << balance <<endl;
        }
    }
    void interest(){
        cout << "Enter Interest Rate: " <<endl;
        cin>> interestRate;
        balance = balance + (balance * interestRate)/100; 
        cout << "Your Balance is: " << balance <<endl;  
    }
    void minmumBalance(){
        cout << "Minimum Balance Must be " << minumum <<endl;
        if (balance < minumum){
            cout << "Your Balance is Less then Minimum Amount " <<endl;
            balance = balance - 50;
            cout << "Your Balance is: " <<balance <<endl;
        }

    }

};

class SavingAccount: public Account{
    public:
    int interestRate;

    void display1(){
        int a,b;
        cout << "Account Name: " << name <<endl;
        cout << "Account Type: " << type <<endl;
        cout << "Account Number: " <<number <<endl;

        while (true){
        cout << "Enter 1 for Deposit or 2 for withdraw or 3 for Check Interest Balance: " <<endl;
        cin>>a;
        if (a == 1)
        { 
            deposit();
        }
        else if (a == 2){
            withdraw();
        }
        else if(a ==3){
            interest();;
        }
        else{
            cout<< "Invalid Input: " <<endl;
        }

        cout << "Enter 0 to Exit or 1 to Continue: " <<endl;
        cin>> b;
        if(b== 0){
            break;
        } 

        else if(b==1){
            continue;
        }
     }
    }
};
class CurrentAccount: public Account{

    public:

    void display1(){
        int a,b;
        cout << "Account Name: " << name <<endl;
        cout << "Account Type: " << type <<endl;
        cout << "Account Number: " <<number <<endl;
        cout << "Balance : " <<balance <<endl;

        while (true){
        cout << "Enter 1 for Deposit or 2 for Withdraw Balance: " <<endl;
        cin>>a;
        if (a == 1)
        { 
            deposit();
        }
        else if (a == 2){
            withdraw();
        }
        else if(a ==3){
        }
        else{
            cout<< "Invalid Input: " <<endl;
        }

        cout << "Enter 0 to Exit or 1 to Continue: " <<endl;
        cin>> b;
        if(b== 0){
            break;
        } 

        else if(b==1){
            continue;
        }

        minmumBalance();
     }

    }
    
};

int main()
{
   // SavingAccount s1;
    //s1.get("Ali", "Saving", 12345);
   // s1.display1();
    CurrentAccount c1;
    c1.get("Md Al Amin", "Current", 242311049);
    c1.display1();


    return 0;
}