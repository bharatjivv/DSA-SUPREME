#include <iostream>
using namespace std;

void printDigitsOfNumber(int nos){

    // for(; nos!=0; nos=nos/10){
    //     int rem = nos % 10;
    //     cout << rem << " ";

    // }
    
    
    while(nos != 0){
    int digit = nos%10;
    nos = nos/10;
    cout << digit << " ";
    }

}

int main(){
    int n; 
    cout << "Enter the number to separate its digits : ";
    cin >> n;
    printDigitsOfNumber(n);


    return 0;
}