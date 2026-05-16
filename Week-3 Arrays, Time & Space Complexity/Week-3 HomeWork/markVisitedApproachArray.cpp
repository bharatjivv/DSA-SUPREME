#include <iostream>
using namespace std;

void markNegative(int *a, int n){
    for(int i=0; i<n; i++){
        int index = abs(a[i]);
        if(a[index-1] > 0){
            a[index-1] *= -1;
        }
    }
    
    // for(int i=0; i<n; i++){
    //     cout << a[i] << " ";
    // } cout << endl;
    
    
    for(int i=0; i<n; i++){
        if(a[i] > 0){
            cout << i+1 << " ";
        }
    }cout << endl;
    
}

int main(){
    int a[] = {1,3,3,3,3};
    int n = sizeof(a)/sizeof(int);
    markNegative(a, n);
    
    return 0;
}