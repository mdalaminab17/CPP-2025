#include <iostream>
using namespace std;

class four_seater
{
    public:
    void property1()
    {
        cout<<"It has space for four persons" <<endl;   
    }
};

class four_wheeler
{
    public:
    void property2()
    {
        cout<<"It runs on four tyres" <<endl;
    }
};

class Car : public four_seater, public four_wheeler
{
    public:
    void display()
    {
        property1();
        property2();
    }
    
};

int main()
{
    Car C1;
    C1.display();
    

    return 0;
}