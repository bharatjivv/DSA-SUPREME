#include <iostream>
using namespace std;

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9};

    /*
    cout << arr[0] << endl;
    cout << &arr[0] << endl;
    
    for(auto value : arr){
        cout << value << " ";
    }cout << endl;

    for(int i=0; i<10; i++){
        cout << &arr[i] << " ";
    }
    */
    //    arr, &arr, &arr[0] -> sab array ke base address ko point karte hai 


    /*
   int *p = arr;
   cout << p << endl;
   cout << &p << endl;
    */
    /*
    cout << *arr << endl;
    cout << *arr + 1 << endl;
    cout << *(arr) + 1 << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;
    */

    char ch[10] = "Babbar";
    char *c = ch;

    cout << ch << endl;
    cout << &ch << endl;
    cout << ch[0] << endl;
    cout << &c << endl;
    cout << *c << endl;
    cout << c << endl;
   
   
   
   
   
   
   
   
   
   
   
   

   return 0;
}