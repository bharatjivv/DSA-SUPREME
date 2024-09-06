// Recursion Level 2 
#include <iostream>
#include <limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int& maxi);
void findMini(int arr[], int n, int i, int& mini);
bool checkKey(string& str, int i, int& n, char& key);

int main(){
    /*
    int arr[] = {10, 30, 21, 44, 32, 17, 19, 66};
    int n = 8;
    int maxi = INT_MIN;
    int mini = INT_MAX;
    int i = 0;
    findMax(arr, n, i, maxi);
    cout << "Maximum nos is : " << maxi << endl;
    findMini(arr, n, i, mini);
    cout << "Minimum nos is : " << mini << endl;
    */

    string str = "loveBabbar";
    int n = str.length();
    char key = 'r';
    int i = 0;
    bool ans = checkKey(str, i, n, key);
    cout << "answer is : " << ans << endl;






    return 0;
}

void findMax(int arr[], int n, int i, int& maxi){
    if(i>=n)
        return;
    
    if(arr[i] > maxi)
        maxi = arr[i];

    findMax(arr, n, i+1, maxi);
}

void findMini(int arr[], int n, int i, int& mini){
    if(i>=n)
        return ;
    
    if(arr[i] < mini)
        mini = arr[i];

    findMini(arr, n, i+1, mini);
}

bool checkKey(string& str, int n, int& i, char& key){
    if(i>=n)
        return false;

    if(str[i] == key)
        return true;
    
    return checkKey(str, i+1, n, key);
}