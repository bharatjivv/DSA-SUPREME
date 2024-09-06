// Recursion Level 3 
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int s, int e, int key){
    // base case
    // case 1 - key not found 
    if(s > e)
        return -1;
    
    int mid = (s + e)/2;
    if(arr[mid] == key)
        return mid;

    if(arr[mid < key])
        return binarySearch(arr, mid+1, e, key);
        
    if(arr[mid] > key)
        return binarySearch(arr, s, mid-1, key);
}

bool checkSorted(vector <int> &arr, int &n, int i){
    if(i == n-1)
        return true;
    return checkSorted(arr, n, i+1);
}

int main(){
    /*
    vector<int> v{10, 20, 30, 50, 60};
    int n = v.size();
    int i = 0;
    bool isSorted = checkSorted(v, n, i);
    
    if(isSorted)
        cout << "Array is sorted " << endl;
    else
        cout << "Not sorted " << endl;
    */

    vector<int> v{10, 20, 30, 40 , 60, 70, 90, 99};
    int target = 99;

    int s = 0; 
    int e = v.size() - 1;
    int ans = binarySearch(v, s, e, target);
    cout << "Answer is : " << ans << endl;

    
    return 0;
}