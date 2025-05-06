#include <iostream>
using namespace std;

class p{
public: 
int i;

};

class q: virtual public p{
public :
int j;
};

class r : virtual public p{
public:
int k;

};

class s: virtual public p, virtual public q, virtual public r{
public:
int mul;

};

int main() {
s obj;
obj.i=5;
obj.j=6;
obj.k=7;

obj.mul= obj.i * obj.j * obj.k;
cout<<"Obj Mul is : " <<obj.mul <<endl;
    
    return 0;
}
