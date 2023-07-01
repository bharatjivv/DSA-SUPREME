#include <iostream>
#include <math.h>
using namespace std;

void decimalToBinaryMethodOne(int n){
    int binary = 0;
    int i = 0;
    while(n > 0){
        int bit = n % 2;
        binary = bit*pow(10, i) + binary;
        n = n / 2;
        i++;
    }

    cout << binary;
}


int decimalToBinaryMethodTwo(int n){
    int binary = 0; 
    // Bitwise Method 
    int i = 0;

    while(n>0){
        int bit = (n & 1);
        binary = bit*pow(10, i++) + binary;
        n = n >> 1;
    }
    
    
    return binary;
}


int binaryToDecimal(int n){
    int decimal = 0;
    int i = 0; 


    while(n){
        int bit = n % 10;
        decimal = decimal + bit * pow(2, i++);
        n /= 10;
    }
    
    
    return decimal;
}



int main(){
    int n;
    cout << "Enter the nos : ";
    cin >> n;

    cout << "Through method one is : ";
    decimalToBinaryMethodOne(n);
    cout << endl;

    cout << "Through method two : " << decimalToBinaryMethodTwo(n);
    

    int binary;
    cout << endl;
    cout << "Enter binary nos : ";
    cin >> binary;
    cout << binaryToDecimal(binary) << endl;
    
    
}