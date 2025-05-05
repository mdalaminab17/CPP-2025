#include <iostream>
using namespace std;

int longBurp(int x)
{
    char arr[x];
    string h;

    for(int i=0;i<x;i++)
    {
        arr[i] = 'r';

    }
    for(int i=0;i<x;i++)
    {
        h += arr[i];

    }
    cout<<"Bu" + h +"p";
}


int main()
{
    int n;
    cin>>n;
    longBurp(n);

    return 0;
}