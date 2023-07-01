#include <iostream>
using namespace std;

int main(){
    int digits[4] = {9, 3, 5, 2};

    int ans = 0;
    for(int i = 0; i < 4; i++ ){
        ans = ans * 10 + digits[i];
    }
    cout << ans;

    
}