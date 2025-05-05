#include <iostream>
using namespace std;

int main()
{
    int size,search;

    cout<<"Enter Array Size : " <<endl;
    cin>>size;

    int arr[size];

    cout<<"Enter Elements of Array : " <<endl;
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }


    cout<<"Enter What you Want to Search : " <<endl;
    cin>>search;

    int flag=0;
    for(int i=0;i<size;i++)
    {
    if(arr[i] == search)
    {
        cout<<"Match " <<search <<" at index " <<i <<endl;
        flag = 1;
        //break;
    }
    }
    if(flag == 0)
    {
        cout<<"Not Found";
    }

    return 0;

}
