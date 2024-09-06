#include <iostream>
using namespace std;

int main(){
    /*
    int a = 5;
    int b = 5;

    cout << a << endl;
    cout << &a << endl;
    cout << &b << endl;

    int *p = &a;
    cout << p << endl;
    cout << *p << endl;

    int z = 25;
    int *k = &z;

    cout << z << endl;
    cout << *k << endl;

    cout << &z << endl;
    cout << k << endl;
    cout << &k << endl;
    */

   /*
    int a = 5;
    int *p = &a;
    char ch = 'c';
    char* ptr = &ch;
    double d = 1.08;
    double *dtr = &d;

    cout << sizeof(p) << endl;
    cout << sizeof(ptr) << endl;
    cout << sizeof(dtr) << endl;
    */
    
    // Bad practise - Segmentation fault
    // int *ptr;
    // cout << *ptr << endl;
    
    //NUll Pointer
    // int *p = NULL; 
    // int *ptre = nullptr;
    // int *pointr = 0;
    // cout << *p << endl;

    int a = 10;
    int *p = &a;
    int *q = p;
    int *r = q;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << &p << endl;
    cout << *p << endl;
    cout << q << endl;
    cout << &q << endl;
    cout << *q << endl;
    cout << r << endl;
    cout << &r << endl;
    cout << *r << endl;
    cout << *p + *q + *r << endl;
    cout << (*p)*2 + (*r)*3 << endl;
    cout << (*p/2) - (*q)/2 << endl;
    
    
}