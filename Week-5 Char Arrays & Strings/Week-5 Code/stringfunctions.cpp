#include <iostream>
#include <string>
using namespace std;

int main(){
    
    // {
    //     string s = "Bharat";
    //     // cout << "Enter your name : ";
    //     // cin >> s;
    //     // getline(cin, s);
    //     cout << "The string entered is : " << s;
        
    //     string s1 = "12";
    //     string s2 = "32";
        
    //     string s3 = s1 + s2;
    //     cout << endl << "3rd string is : " << s3;
        
    //     int sum = stoi(s1) + stoi(s2);
    //     cout << endl << "The sum of int values of both the string is : " << sum ;
        
    //     cout << endl << "The element at first position of s3 string : " << s3.at(1);
        
    //     string naam = "Examplary";
    //     char f1 = naam.front();
    //     char b1 = naam.back();
        
    //     cout << endl << "Front element of constant string is : " << f1;
    //     cout << endl << "Back element of constant string is : " << b1;
    // }
    // {
    //     string s = "axxxxyyyyb";
    //     string part = "xy";
        
    //     int posn = s.find(part);
        
    //     cout << posn;
    //     while(posn != string::npos){
    //         s.erase(posn, part.length());
    //         posn = s.find(part);
    //         cout << posn;
    //     }
        
    //     cout << endl << s;
    // }
    
    std::string first = "Bharat, Jiwanani 123 is alnot together";
    cout << first.length() << endl;
    string ans = "";

    first.tolower();    
    cout << endl << first;

    
    "123456789"
    "987654321"
    
    return 0;
}

// class Solution {
// public:
//     bool isPalindrome(string s) {
//         string pal = "";
//         for (char i : s) {
//             i = tolower(i);
//             if (isalpha(i) || isdigit(i)) pal.push_back(i);
//         }

//         int n = pal.size(), left = 0, right = n - 1;
//         if (n == 0 || n == 1) return true;
//         while (left <= right) {
//             if (pal[left] == pal[right]) {
//                 left++;
//                 right--;
//             } else return false;
//         }
//         return true;
//     }
// };