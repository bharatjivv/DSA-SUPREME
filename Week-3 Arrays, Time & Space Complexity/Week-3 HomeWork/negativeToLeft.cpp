// Move all negative to the left
#include <iostream>
using namespace std;

void moveNegativeLeft(int arr[], int n){
    int l=0, h=n-1;
    while(l<h){
        if(arr[l] < 0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l], arr[h]);
        }
    }
}


int main(){
    int arr[] = {1, 2,-3,4,-5,6,-7,8,3,-9};
    int n = sizeof(arr)/sizeof(int);

    moveNegativeLeft(arr, n);
    for(auto i: arr){
        cout << i << " ";
    }
    

}