// 27 July 2025 : 8:47 PM
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int a = 50;
    int* ptr = &a;
    

    cout<<a <<endl; // print the vale of var int a
    cout<<&a <<endl; // memory address of var int a
    cout<<ptr <<endl; // store the memory addr of var  a
    cout<<&ptr <<endl; // verify that ptr store the memory address of var int a but its own memory address is different
    cout<<ptr+1 <<endl; // 4 byte memory take 1 int value

    return 0;
}
