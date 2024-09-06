// Searching and Sorting Class 2
#include <iostream>
using namespace std;

int findSqrt(int n);
bool binarySearch(int arr[][4], int rows, int cols, int target);

int main(){
    /*
    int n;
    cout << "Enter the number ";
    cin >> n;

    int ans = findSqrt(n);
    cout << "Ans is " << ans << endl;

    int precision;
    cout << "Enter the number of floating digits in precision ";
    cin >> precision;

    double step = 0.1;
    double finalAns = ans;

    for(int i=0; i<precision; i++){
        for(double j=finalAns; j*j<=n; j=j+step){
            finalAns = j;
        }
        step = step/10;
    }

    cout << "Final answer is : " << finalAns << endl;
*/


    int arr[5][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int rows = 5;
    int cols = 4;
    int target = 19;

    bool ans = binarySearch(arr, rows, cols, target);

    if(ans)
        cout << "found " << endl;
    else
        cout << "Not found " << endl;





    return 0;
}



int findSqrt(int n){
    int s=0;
    int e=n;
    int mid = s + (e-s)/2;
    int ans = -1;
    while(s<=e){
        if(mid*mid == n)
            return mid;

        if(mid*mid > n)
            e = mid-1;
        
        else{
            ans = mid;
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}



bool binarySearch(int arr[][4], int rows, int cols, int target){
    int start = 0;
    int end = rows*cols -1;
    int mid = start + (end-start)/2;

    while(start <= end){
        int rowIndex = mid/cols;
        int colIndex = mid%cols;

        if(arr[rowIndex][colIndex] == target){
            cout << "Found at : " << rowIndex<< " " << colIndex << endl;
            return true;
        }
        if(arr[rowIndex][colIndex] < target)
            start = mid+1;
        else
            end = mid -1;
        
        mid = start + (end -start)/2;
        
    }
    return false;
}