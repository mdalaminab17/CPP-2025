#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

void password(string pass){

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    if(pass.length() < 8) {
        throw "Password must be at least 8 character long";
    }

     for (int i=0; i<pass.length(); i++){
        if (pass[i] >= 'A' && pass[i] <= 'Z')
        {
            hasUpper = true;
        }
        else if(pass[i] >= 'a' && pass[i] <= 'z')
        {
            hasLower = true;
        }
        else if(pass[i] >= '0' && pass[i] <= '9')
        {
            hasDigit = true;
        }
    }
    if(!hasUpper)
    {
        throw "Password must contain at Least one Uppercase Letter";
    }
    if(!hasLower)
    {
        throw "Password must contain at Least one Lowercase Letter";
    }
    if(!hasDigit)
    {
        throw "Password must contain at Least one Digit";
    }
    
}


int main(){
    string pass;
    cout<<"Enter Password : ";
    cin>>pass;

    try{
        password(pass);
        cout<<"Your Password is " <<pass <<" valid" <<endl;
    }
    catch (const char* error)
    {
        cout<<error <<endl;
    }




    return 0;
}