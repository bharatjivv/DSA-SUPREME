#include <iostream>
using namespace std;

int getSum(int a, int b) {
        while(b!=0){
            int carry=a&b;
            cout << "carry: " << carry << endl;
            a=a^b;
            cout << "a : " << a << endl;
            b=carry<<=1;
            cout << "b : " << b << endl;
        }
        return a;
}


int main(){
    int a = 2;
    int b = 3;
    int ans = getSum(a, b);
    cout << "The sum is : " << ans << endl;
    
    return 0;
}