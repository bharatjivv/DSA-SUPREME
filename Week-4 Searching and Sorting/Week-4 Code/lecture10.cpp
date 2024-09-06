// Searching and sorting Class 1
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binarySearch(int arr[], int size, int target);
int firstOccurence(vector<int> v, int target);
int lastOccurence(vector<int> v, int target);
int peakIndexMountainArray(vector<int> arr);

int main(){
    /*
    int arr[] = {2, 4, 6, 8, 10, 12, 16};
    int size = 7;
    int target = 25;
    int indexOfTarget = binarySearch(arr, size, target);

    if(indexOfTarget == -1)
        cout << "Target not found " << endl;
    else
        cout << "Target found at " << indexOfTarget << endl;
    */


    /*
    vector<int> v{1, 2, 3, 4, 5, 6};
    int arr[] = {1, 2, 3, 5, 6, 7, 8, 9};
    int size = 8;


    if(binary_search(v.begin(), v.end(), 3))
        cout << "Found " << endl;
    else
        cout << "Not found ";

    if(binary_search(arr, arr+size, 6))
        cout << "Found ";
    else
        cout << "Not Found" << endl;

    int target = 4;
    vector<int> v{1,3,3,3,3,3,4,4,4,4,4,4,4,6,7};
    
    int ans = firstOccurence(v, target);
    int answer = lastOccurence(v, target);
    cout << "First Occurence found at : "<< ans << endl;
    cout << "Last occurence found  at : " << answer << endl;
    cout << "Total nos of occurence is : " << answer -ans + 1 << endl;
    */










    return 0;
}


int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size -1;
    int mid = start + (end -start)/2;

    while(start <= end){
        int element = arr[mid];
        if(element == target){
            return mid;
        }
        else if(target < element){
            // search in left
            end = mid -1;
        }
        else{
            // search in right
            start = mid + 1;
        }
        mid = (start + end)/2;
    }
    // element not found 
    return -1;
}


int firstOccurence(vector<int> v, int target){
    int start = 0;
    int end = v.size() -1;
    int mid = start + (end -start)/2;
    int ans = -1;

    while(start <= end){
        int element = v[mid];
        
        if(element == target){
            ans = mid;
            end = mid-1;
        }
        else if(target > element){
            //search right
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }

    return ans;
}



int lastOccurence(vector<int> v, int target){
    int start = 0;
    int end = v.size() -1;
    int mid = start + (end -start)/2;
    int ans = -1;

    while(start <= end){
        int element = v[mid];
        
        if(element == target){
            ans = mid;
            start = mid + 1;
        }
        else if(target > element){
            //search right
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
        mid = start + (end-start)/2;
    }

    return ans;
}


int peakIndexMountainArray(vector<int> arr){
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e-s)/2;

    while(s< e){
        if(arr[mid] < arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid = s + (e-s)/2;
    }
    return s;
    
}