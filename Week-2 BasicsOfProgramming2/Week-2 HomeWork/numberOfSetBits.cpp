#include <iostream>
using namespace std;

int countNosOfSetBits(int nos){
    int ans = 0;

    while(nos!=0){
        if(nos&1){
            ans++;
        }
        nos = nos >> 1;

    }

    return ans;
}

int main(){
    int n;
    cout << "Enter nos : ";
    cin >> n;

    cout << "Number of set bits are : " << countNosOfSetBits(n);
    
}