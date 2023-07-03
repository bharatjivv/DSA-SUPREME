// Array Class - 1
#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
}

bool find(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

int main(){
    // Initialization of Arrays
    // int array[53];
    // char arrar[106];
    // bool arrey[205];
    // cout << "Arrays created successfully " << endl;



    // Index && Access in Array
    // int arr[] = {1, 3, 5, 7, 9};
    // cout << arr[4] << " " << endl;

    // for(int i=0; i<5; i++){
    //     cout << arr[i] << " ";
    // }



    // int arr[10];
    // cout << "Enter the input values in array : ";
    // Inputting array
    // for(int i=0; i<10; i++){
    //     cout << "Enter " << i << "th value : ";
    //     cin >> arr[i];
    // }
    // Printing array
    // cout << "The array inputted is : ";
    // for(int i=0; i<10; i++){
    //     cout << arr[i] << " ";
    // }
    

    // Arrays and Functions
    // int arr[5]; 
    // cout << "Enter five elements : ";
    // for(int i=0; i<5; i++){
    //     cin >> arr[i];
    // }
    // cout << "Doubles are : ";
    // for(int i=0; i<5; i++){
    //     cout << 2*arr[i] << " ";
    // }


    // int size = 9;
    // int key = 5;
    // int arr[] = {1, 2, 3, 4, 5, 6,7 ,8, 9};
    // if(find(arr, size, key)){
    //     cout << "Found " << endl;
    // }
    // else{
    //     cout << "Not found " << endl;
    // }
    
    

    // Count 0 and 1 in an array
    // int arr[] = {0, 1, 1, 0, 0,0,0,0,1,1,1,1,1};
    // int size = 15;
    // int numZero = 0;
    // int numOne = 0;

    // for(int i=0; i<size; i++){
    //     if(arr[i] == 0)
    //         numZero++;
    //     if(arr[i] == 1)
    //         numOne++;
    // }

    // cout << "Number of zeros are : " << numZero << endl;
    // cout << "NUmber of ones are : " << numOne << endl;


    // Maximum number in an array 
    // int arr[] = {2,42,2,56,65,2065,285,356,2354,2596};
    // int size = 10;
    // int maxNum = INT_MIN;
    // for(int i=0; i<size; i++){
    //     if(arr[i] > maxNum){
    //         maxNum = arr[i];
    //     }
    // }
    // cout << "Maximum nos in array is : " << maxNum << endl;



    // Extreme Print in Array
    // int arr[] = {10, 20, 30, 40, 50, 60, 70};
    // int size = 7;

    // for(int i=0, j=size-1; i<size, j > 0; i++, j--){
    //     if(i<=j)
    //         cout << arr[i] << " | " << arr[j] << " ";
    //     else   
    //         break;
    // }




    // Reverse array
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;

    int start = 0; 
    int end = size -1;

    while(start<=end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }









}