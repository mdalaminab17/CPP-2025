#include <iostream>
using namespace std;

class Account{
    string name;
    string type;
    int number;
    int interestRate;
    double minumum = 500.00;
    double balance = 0.00;
    double depotitAmount;
    double withdrawAmount;


    public:

    void post(string n, string t, int a){
        name = n;
        type = t;
        number = a;


    }
   void display() {

  
    cout << "Account Name: " << name <<endl;
    cout << "Account Type: " << type <<endl;
    cout << "Account Number: " <<number <<endl;
    cout << "Balance : " <<balance <<endl;
}

    void deposit(){
        cout << "Enter Deposit Amount" <<endl;
        cin>> depotitAmount;
        balance += depotitAmount;
        cout << "Your Balnce is: " << balance <<endl;
    }
    void withdraw(){
        cout << "Enter Withdraw Amount: " <<endl;
        cin>> withdrawAmount;

        if (withdrawAmount > balance){
            cout << "Insufficient Balance" <<endl;
        }
        else{
            balance -= withdrawAmount;
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
            cout << "Your current Balance is Now: " <<balance <<endl;
        }

    }

};

class SavingAccount: public Account{
    public:
    int interestRate;

    void get(){
     
        display();
        int a,b;

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

    void get(){
       display();

       int a,b;

        while (true){
        cout << "Enter 1 for Deposit or 2 for Withdraw Balance: " <<endl;
        cin>>a;
        if (a == 1)
        { 
            deposit();
        }
        else if (a == 2){
            withdraw();
            minmumBalance();
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

int main()
{
    SavingAccount s1;
    s1.post("Ali", "Saving", 12345);
    s1.get();
    CurrentAccount c1;
    c1.post("Md Al Amin", "Current", 242311049);
    c1.get();


    return 0;
}