#include <iostream>
#include "assert.h"
using namespace std;

void NumericHollowHalfPyramid(int n){
    for(int rows = 0; rows<n; rows++){

            for(int col = 0; col <= rows; col++){
                if(col == 0 || col == rows|| rows == n-1)
                    cout << col+1 << " ";
                else
                    cout << "  ";
            }
            cout << endl;
    }

}

void NumericHollowInvertedHalfPyramid(int n){
    for(int row = 0; row < n; row++){
        int nos = row+1;
        for(int col = 0; col < n-row; col++){
            if(row==0 || col == 0 || col == n-row-1)
                cout << nos++ << " ";
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}


void NumericPalindromeEquilateralPyramid(int n){
    for(int row=0; row<n; row++){
        int count = 1;

        for(int space=0; space< n-row-1; space++){
            cout << "  ";
        }
        
        for(int col=0; col<row+1; col++){
            cout << count++ << " ";
        }
        int nos = row;
        for(int col=0; col<row; col++){
            cout << nos-- << " ";
        }
        cout << endl;
    }
    
}


void SolidHalfDiamond(int n){
    for(int rows = 0; rows<n; rows++){

            for(int col = 0; col <= rows; col++){
                    cout << "* ";
            }
            cout << endl;
    }
    for(int row = 0; row < n-1; row++){
        for(int col = 0; col < n-row-1; col++){
                cout << "* ";
        }
        cout << endl;
    }
}


void FancyPatternOne(int n){
    assert(n<=9);
     for(int row=0; row<n; row++){
        int start_num_index = 8 - row;
        int num = row + 1;
        int count_num = num;

        for(int col=0; col<17; col++){
            if(col==start_num_index && count_num > 0){
                cout << num << " ";
                start_num_index += 2;
                count_num--;
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void FancyPatternTwo(int n){
    int c = 1;
    for(int row=0; row<n; row++){
        for(int col=0; col<=row; col++){
            cout << c;
            c++;
            if(col<row)
                cout << "*";
        }
        cout << endl;
    }
    

    int start = c - n;
    for(int row=0; row<n; row++){
        int k = start;
        for(int col=0; col<=n-row-1; col++){
            cout << k;
            k++;
            if(col < n-row-1)
                cout << "*";
        }
        start = start - (n - row - 1);
        cout << endl;
    }


}

void FloydTrianglePattern(int n){
    int nos = 1;
    for(int row=0; row<n; row++){
        for(int col=0; col<row+1; col++){
            cout << nos++ << " ";
        }
        cout << endl;
    }

}



int main(){
    int n;
    cout << "Enter rows : ";
    cin >> n;

    // NumericHollowHalfPyramid(n);
    // cout << endl;
    // NumericHollowInvertedHalfPyramid(n);
    // cout << endl;
    // NumericPalindromeEquilateralPyramid(n);
    // cout << endl;
    // SolidHalfDiamond(n);
    // cout << endl;
    // FancyPatternOne(n);
    // cout << endl;
    // FancyPatternTwo(n);
    // cout << endl;
    // FloydTrianglePattern(n);
    // cout << endl;
    // PascalTrianglePattern(n)



    
    

    
    
    
}