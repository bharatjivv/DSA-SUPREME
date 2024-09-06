// Merge Sort 
#include <iostream>
using namespace std;

void merge(int* arr, int s, int e);
void mergesort(int* arr, int s, int e);

int main(){
    /*
    int arr[] = {10,8,6,4,2,9,7,5,3,1};
    int n = 10;

    int s = 0;
    int e = n-1;

    // Calling mergesort function
    mergesort(arr, s, e);
    
    // Printing the array
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    */

   
    
    return 0;
}





void mergesort(int* arr, int s, int e){
    // base case
    if(s>=e)
        return;

    int mid = (s+e)/2;
    // left part sort
    mergesort(arr, s, mid);

    // right part sort
    mergesort(arr, mid+1, e);

    //merge 2 sorted arrays
    merge(arr, s, e);
}


void merge(int* arr, int s, int e){
    int mid = (s+e)/2;

    int len1 = mid-s+1;
    int len2 = e -mid;

    // Created two dynamic arrays
    int* left = new int[len1];
    int* right = new int[len2];

    // copy values
    int k = s;
    for(int i=0; i<len1; i++){
        left[i] = arr[k++];
    }

    k =mid+1;
    for(int i=0; i<len2; i++){
        right[i] = arr[k++];
    }

    int leftIndex = 0;
    int rightIndex = 0;
    int mainArrayIndex = s;


    while(leftIndex <len1 && rightIndex < len2){
        if(left[leftIndex] < right[rightIndex]) { 
            arr[mainArrayIndex++] = left[leftIndex++];
        }
        else{
            arr[mainArrayIndex++] = right[rightIndex++];
        }
    }
    
    // copy index for left array
    while(leftIndex < len1){
        arr[mainArrayIndex++] = left[leftIndex++];
    }
    
    // copy logic for right index
    while(rightIndex < len2){
        arr[mainArrayIndex++] = right[rightIndex++];
    }
    
    // After use delete left and right array
    
}