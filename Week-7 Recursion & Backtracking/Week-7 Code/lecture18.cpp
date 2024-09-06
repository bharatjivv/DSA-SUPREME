// Recursion Level 1 
#include <iostream>
using namespace std;

void printCounting(int n);
int fib(int n);

int main(){
    /*
    int n;
    cout << "Enter the nos : ";
    cin >> n;
    printCounting(n);
    */

    int n;
    cin >> n;
    cout << fib(n);




    return 0;
}

void printCounting(int n){
    if(n==0)
        return ;
    
    cout << n << " ";
    printCounting(n-1);
}

int fib(int n){
    if(n==0 || n==1)
        return n;
    int ans = fib(n-1) + fib(n-2);
    return ans;
}