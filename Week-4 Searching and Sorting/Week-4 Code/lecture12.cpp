// Searching and sorting class 3 
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int target);
int solve(int dividend, int divisor);
int solvePair(vector<int> arr);
int main(){
    // Binary Search in a nearly sorted array
    /*
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    int target = 40;

    int ans = binarySearch(arr, target);
    cout << "Index of " << target << " is " << ans << endl;
    */

   // Divide through binary search 
   /*
   int dividend = 22;
   int divisor = 7;

   int ans = solve(dividend, divisor);
    cout << "Answer is " << ans << endl;
    */

   vector<int> arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
   int ans = solvePair(arr);
   cout << "Index is : " << ans << endl;
   cout << "Answer is : " << arr[ans] << endl;


    return 0;
}


int binarySearch(vector<int> arr, int target){
    int s = 0; 
    int e = arr.size() -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == target)
            return mid;
        if(mid + 1 < arr.size() && arr[mid+1] == target)
            return mid+1;
        if(mid-1 >=0 && arr[mid-1] == target)
            return mid-1;

        if(target > arr[mid]){
            // right search
            s = mid + 2;
        }
        else{
            e = mid - 2;
        }
        mid = s + (e-s)/2;
    }
    return -1;
}


int solve(int dividend, int divisor){
    int s = 0;
    int e = dividend;
    int mid = s + (e-s)/2;
    int ans = -1; 

    while(s <= e){
        if(mid*divisor == dividend){
            return mid;
        }
        if(mid*divisor > dividend){
            e = mid -1;
        }
        else{
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int solvePair(vector<int> arr){
    int s = 0;
    int e = arr.size() -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(s == e){
            return s; 
        }

        // 2 cases mid - even or mid - odd
        if(mid%2 == 0) {
            if(arr[mid] == arr[mid + 1]){
                s = mid + 2;
            }
            else{
                e = mid;
            }
        }

        else{
            if(arr[mid] == arr[mid-1]){
                s = mid + 1;
            }
            else { 
                e = mid - 1;
            }
        }

        mid = s + (e-s)/2;
    }
    return -1;
}