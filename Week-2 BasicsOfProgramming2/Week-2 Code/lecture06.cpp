// FUNCTION AND SOME PROBLEM STATEMENTS
#include <iostream>
using namespace std;

void printName(){
    int n;
    cout <<"Enter the value of n : " << endl;
    cin >> n;
    for(int i=0; i<n; i++){
        cout <<"Babbar" << endl;
    }
}

int addTwoNos(int a, int b){
    int sum = a + b;
    return sum;
}

char getGrade(int marks){
    char grade;

    if (marks > 90){
        grade = 'A';
    }
    else if (marks > 80){
        grade = 'B';
    }
    else{
        grade = 'C';
    }


    return grade;
}

int main(){
   
   int a, b;
   cout << "Enter a and b : ";
   cin >> a >> b;
   cout << "The sum of a and b is : " << addTwoNos(a, b) << endl;

   int marks;
   cout << "Enter your marks : ";
   cin >> marks;
   cout << "Grade is : " << getGrade(marks);





    return 0;
}