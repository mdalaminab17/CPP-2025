#include <iostream>
using namespace std;

int main() {
    
    
    int arr[] = {34,29,19,-3,100};
    int size = 5;
    int smallest = INT_MAX; // Equal to Positive (+ ∞) Infinity 
    int largest = INT_MIN; // Equal to Negative (-∞) Infinity

    for(int i = 0; i<size; i++) {
      smallest = min(arr[i], smallest); // Built in Function for Minimum Number find
      largest = max(arr[i], largest); // Built in Function for Maximum Number
        
    }
    
    cout<<"Smallest Number is " <<smallest <<endl;
    cout<<"Largest Number is " <<largest <<endl;

    return 0;
}
