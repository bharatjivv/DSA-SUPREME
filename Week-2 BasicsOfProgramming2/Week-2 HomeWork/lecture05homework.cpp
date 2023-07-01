#include <iostream>
using namespace std;

double areaOfCircle(int r){
    return 3.14*r*r;
}

bool evenOdd(int nos){
    // if(nos%2==0){
    if((nos&1) == 0)
        return true;
    else
        return false;
}

int fact(int nos){
    for(int i=1; i<nos; i++){
        nos = nos*i;
    }
    return nos;
}

void printOneToNos(int n){
    for(int i = 1; i <= n; i++){
        cout << i << " ";
    }
}

bool checkPrime(int nos){
    int i =2;
    for(; i<nos; i++){
        if(nos%i==0)
            return false;
    }
    return true;
}

int main(){

    int nos;
    cout << "Enter nos to print counting : ";
    cin >> nos;


    // cout << "Area is : " << areaOfCircle(nos);
    // cout << "Counting from 1 to nos is : "; printOneToNos(nos);


    // bool isPrime = checkPrime(nos)    ;

    // if(isPrime)
    //     cout << "Nos is Prime ";
    // else
    //     cout << "Nos not Prime ";



}

