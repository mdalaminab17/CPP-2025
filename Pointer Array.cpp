// 27 July 2025 : 9:02 PM
#include <iostream>
#include <vector>
using namespace std;

int main() {

    int arr[] = {5, 10, 15, 20, 25};
    int* ptr = arr;

    cout<<ptr <<endl; //print the memory address of array index 0
    cout<<*ptr <<endl; // Print the value of array index 0
    

    cout<<(ptr+1) <<endl; // print the memory address of array index 1
    cout<<*(ptr+1) <<endl; // Access the value of array index 1

    cout<<ptr+2 <<endl; // Can add integer (ex. add int 2) value using memory address


    return 0;
}
