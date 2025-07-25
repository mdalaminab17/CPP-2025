#include <iostream>
using namespace std;

int main() {
    
    
    int arr[] = {34,29,19,-3,100};
    int size = 5;
    int smallest = INT_MAX; // Equal to Positive (+ ∞) Infinity 
    int largest = INT_MIN; // Equal to Negative (-∞) Infinity
    int index_smallest;
    int index_largest;

    for(int i = 0; i<size; i++) {
      if(arr[i] < smallest)
        {
          smallest = arr[i];
          index_smallest = i;
        }
        
        if(arr[i] > largest)
        {
          largest = arr[i];
          index_largest = i;
        }
    }
    
    cout<<"Smallest Number is " <<smallest <<" at index " <<index_smallest <<endl;
    cout<<"Largest Number is " <<largest <<" at index " <<index_largest <<endl;

    return 0;
}
