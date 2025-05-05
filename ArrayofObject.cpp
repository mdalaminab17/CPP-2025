//v2.0
#include <iostream>
#include <string>
using namespace std;

class Person
{
    int id;
    int roll;
    float gpa;
    string name;
    string dept;
    string deg;

    public:
    //Definition for Students Class

    void input_stu()
    {
        cout<<"\n ---- Input Student Info ----\n";
        cout<<"Enter Student Id : ";
        cin>>id;
        cout<<"Enter Student Roll : ";
        cin>>roll;
        cout<<"Enter GPA : ";
        cin>>gpa;
        cin.ignore();
        cout<<"Enter Student Name : ";
        getline(cin,name);
        cout<<"Enter Student Dept : ";
        getline(cin,dept);
    }
    void display_stu()
    {
        cout<<"\n ---- Printing Student Info ----\n";
        cout<<"\nStudent Id : " <<id <<endl <<"Student Roll : " <<roll <<endl <<"Student GPA : " <<gpa <<endl <<"Student Name : " <<name <<endl <<"Student Dept : " <<dept <<endl;
    }

   // Definition for Teachers Class

    void input_tec()
    {
        cout<<"\n ---- Input Teacher Info ----\n";
        cout<<"\nEnter Teacher Id : ";
        cin>>id;
        cin.ignore();
        cout<<"Enter Teacher Name : ";
        getline(cin,name);
        cout<<"Enter Teacher Dept : ";
        getline(cin,dept);
        cout<<"Teacher Designation : ";
        getline(cin,deg);
    }
    void display_tec()
    {
        cout<<"\n ---- Printing Teacher Info ----\n";
        cout<<"Teacher Id : " <<id <<endl <<"Teacher Name : " <<name <<endl <<"Teacher Dept : " <<dept <<endl <<"Teacher Designation : " <<deg <<endl;
    }


};

class Students: public Person
{
    public:
    void get()
    {
        input_stu();
    }
    void post()
    {
        display_stu();
    }
 
};

class Teachers: public Person
{
    public:
    void get()
    {
        input_tec();
    }
    void post()
    {
        display_tec();
    }
 
};
int main()
{
    int x,y;
    cout<<"Enter no of Students : " ;
    cin>>x;
    cout<<"Enter no of Teachers : ";
    cin>>y;
    Students stu[x];
    Teachers t[y];

    for(int i=0;i<x;i++)
        {
            stu[i].get();
        }
        for(int i=0;i<y;i++)
        {
            t[i].get();
    }
    

    for(int i=0;i<x;i++)
    {
        stu[i].post();
    }
    for(int i=0;i<y;i++)
    {
        t[i].post();
    }
    return 0;
}