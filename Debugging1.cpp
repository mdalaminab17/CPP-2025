#include <iostream>
using namespace std;

class faculty
{
    private :
    int fid;
    char name[20];

    public:
    void getdata()
    {
        cout<<"Enter faculty id :- \t";
        cin>>fid;
        cout<<"Enter faculty Name :- \t";
        cin>>name;
    }
    void putdata()
    {
        cout<<"\n\n" <<"Faculty id \t" <<fid <<endl;
        cout<<"Name of Faculty \t" <<name <<endl;
    }
};

class details : public faculty {

    public:
    int age,exp;
    void getdetails()
    {
        getdata();
        cout<<"Enter age :- \t";
        cin>>age;
        cout<<"Enter year of exp :- ";
        cin>>exp;
    }

    void display()
    {
        putdata();
        cout<<"Faculty age \t" <<age <<endl;
        cout<<"Faculty year of exp \t" <<exp <<endl;
    }
};

int main()
{
    details m;
    m.getdetails();
    m.display();



    return 0;
}