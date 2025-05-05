#include <iostream>
using namespace std;

class Person 
{
    int age,nid;

    public:
    void getAge(int a,int n)
    {
        age = a;
        nid = n;
    }

    string fname="Md. A. Razzak";

    
    /*void showAge()
    {
        cout<<"Age : " <<age<<endl;
    }
    */

    friend class Student;
};

class Student : public Person
{
    string sname = "Md Al Amin";

    public:
    void displayAge()
    {
        cout<<"Student Name : " <<sname <<endl <<"Father Name : " <<fname <<endl <<"Age : " <<age <<endl <<"NId : " <<nid <<endl;
    } 
    
};

int main()
{
    Student s1;
    s1.getAge(20,2074294034);
    s1.displayAge();

    return 0;
}