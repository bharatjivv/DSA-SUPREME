#include <iostream>
using namespace std;

void solve(int** ptr){
    ptr = ptr + 1;
}

int main(){
    /*
    int a = 5;
    int *p = &a;    // p is a pointer to integer data
    int **q = &p;  // q is a pointer to int* data
    
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    */

    /*
    int a = 5;
    int *ptr1 =     &a;
    int **ptr2 =    &ptr1;
    int ***ptr3 =   &ptr2;
    int ****ptr4 =  &ptr3;
    int *****ptr5 = &ptr4;
    cout << "a : " << a << endl;
    cout << "*ptr1 : " << *ptr1 << endl;
    cout << "**ptr2 : " << **ptr2 << endl;
    */
    
    /*
    int x = 12;
    int *p = &x;
    int **q = &p;
    solve(q);

    cout << x << endl;
    */

   int a = 5;
   int *p = &a;
   int **ptr = &p;
   **ptr = **ptr + 1;
    cout << **ptr << endl;
    
    
    return 0;
}