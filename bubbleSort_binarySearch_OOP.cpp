#include <iostream>
using namespace std;
class Solution{
public:
    void bubblesort(int nums[], int n){
        for(int i=0; i<n-1; i++){
           bool f = 0;
           for(int j=0; j<n-1-i; j++){
              if(nums[j]>nums[j+1]){
                 int temp = nums[j];
                 nums[j] = nums[j+1];
                 nums[j+1] = temp; //swap(nums[j],nums[j+1]);
                 f = 1;
              } 
           } if(!f){
                break;
           }
        }
    }

    int binarySearch(int nums[], int n, int target){
        int st = 0;
        int end = n-1;
        
        while(st<=end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > target){
                end = mid-1;
            }else{
                st = mid + 1;
            }
        } return -1;
    }
};

int main(){
    int n;
    cout<<"Enter Array Size: ";
    cin>>n;
    int nums[n];
    int target;
    
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Enter Target: ";
    cin>>target;
    
    Solution obj1;
    
    cout<<"Sorted Array: ";
    obj1.bubblesort(nums,n);
    for(int i=0; i<n; i++){
        cout<<nums[i] <<" ";
    }
    cout << endl;
    
    int found = obj1.binarySearch(nums,n,target);
    if(found == -1){
        cout<<"Target Not Found";
    }else{
        cout<<"Target Found at index " <<found;
    }
    
    cout << endl;

}
