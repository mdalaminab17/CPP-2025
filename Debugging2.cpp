#include <iostream>
using namespace std;

class four_seater
{
    public:
    virtual void property()
    {
        cout<<"It has space for four persons" <<endl;   
    }
};

class four_wheeler
{
    public:
   virtual void property()
    {
        cout<<"It runs on four tyres" <<endl;
    }
};

class Car : public four_seater, public four_wheeler
{
    public:
    void display()
    {
        four_seater::property();
        four_wheeler::property();
    }
    
};

int main()
{
    Car C1;
    C1.display();
    

    return 0;
}