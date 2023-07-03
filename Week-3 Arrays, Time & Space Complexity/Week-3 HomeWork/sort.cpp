// Sort 0's, 1's and 2's
#include <iostream>
#include <vector>
using namespace std;

int main(){
    /*
    int zero = 0;
    int one = 0;
    int two = 0;
    vector<int> arr{1, 2, 0, 1, 2, 2, 0, 1, 2, 1, 1, 0, 0};
    vector<int> ans;

    for(int i=0; i<arr.size(); i++){
        if(arr[i]==0)
            zero++;
        else if(arr[i]==1)
            one++;
        else
            two++;
    }
    
    // spread
    while(zero--){
        ans.push_back(0);
    }
    while(one--){
        ans.push_back(1);
    }
    while(two--){
        ans.push_back(2);
    }
    
    for(auto value: ans){
        cout << value << " ";
    }
    */



   // 3rd Approach - 3 Pointer Approach

   vector<int> nums {1, 2, 0, 1, 2, 2, 0, 1, 2, 1, 1, 0, 0};
    int low=0; int mid=0; int high = nums.size()-1;

    while(mid<=high){
        if(nums[mid]== 0){
            swap(nums[low], nums[mid]);
            low++, mid++;
        }
        
        if(nums[mid] == 1){
            mid++;
        }
        
        else{
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    
    cout << "Sorted array is : ";
    for(int i=0; i<nums.size(); i++){
        cout << nums[i] << " ";
    }
   
    
    return 0;
}