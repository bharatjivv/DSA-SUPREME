// PATTERN CONTINUES
#include <iostream>
using namespace std;

int main(){
    // Full Pyramid
    // int n;
    // cout << "Enter nos : ";
    // cin >> n;

    // for(int row=0; row<n; row++){
    //     // cout << "Enter Row Loop : ";
        
    //     for(int space = 0; space < n-row; space++){
    //         // cout << "Entered Space Loop : ";
    //         cout << "  ";
    //     }

    //     for(int star = 0; star<row+1; star++){
    //         // cout << "Enter Star loop : ";
    //         cout << "* ";
    //     }

    //     for(int i=0; i<row; i++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    
    
    // Inverted Full Pyramid

    // int n;
    // cout << "Enter nos : ";
    // cin >> n;
    
    // for(int row=0; row<n; row++){
    //     for(int space=0; space<row; space++){
    //         cout << "  ";
    //     }
    //     for(int star=0; star<(n-row); star++){
    //         cout << "* ";
    //     }

    //     for(int i=0; i<n-row-1; i++){
    //         cout << "* ";
    //     }
    //     cout << endl;

    // }



    // Hollow Diamond
    // int n;
    // cout << "Enter nos : ";
    // cin >> n;

    // for(int row=0; row<n; row++){
    //     // spaces
    //     for(int col=0; col<n-row-1; col++){
    //         cout << " ";
    //     }
    //     // stars
    //     for(int col=0; col<2*row+1; col++){
    //         // if first char or last char
    //         if(col==0){
    //             cout << "*";
    //         }
    //         else if(col== 2*row){
    //             cout << "*";
    //         }
    //         else{
    //             cout << " ";
    //         }
 
    //     }

    //     cout << endl;
    // }

    //     for(int row=0; row<n; row++){
    //         // spaces
    //         for(int col=0; col<row; col++){
    //             cout <<" ";
    //         }

    //         // star
    //         for(int col=0; col<2*n-2*row-1; col=col+1){
    //             if(col==0 || col== 2*n - 2*row -2){
    //                 cout << "*";
    //             }
    //             else{
    //                 cout << " ";
    //             }
    //         }
    //             cout << endl;
    //     }



    // Flipped Solid Diamond

    // int n;
    // cout << "Enter nos : ";
    // cin >> n;

    // for(int row=0; row<n; row++){
    //     // half pyramid
    //     for(int col=0; col<n-row; col++){
    //         cout << "*";
    //     }

    //     // space wala full pyramid 
    //     for(int j=0; j< 2*row+1; j++){
    //         cout << " ";
    //     }

    //     // half pyramid
    //     for(int col=0; col<n-row; col++){
    //         cout << "*";
    //     }
    //     cout << endl;

    // }
    
    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout << "*";
    //     }

    //     for(int j=0; j<2*n-2*row-1; j++){
    //         cout << " ";
    //     }

    //     for(int col=0; col<row+1; col++){
    //         cout << "*";
    //     }
        
    //     cout << endl;
    // }


    // Fancy Pattern #2

    // int n;
    // cout << "Enter nos : ";
    // cin >> n;

    // for(int row=0; row<n; row++){
    //     for(int col=0; col<row+1; col++){
    //         cout << row+1;
    //         if(col!=row)
    //             cout << "*";

    //     }
    //     cout << endl;
    // }

    // for(int row=0; row<n; row++){
    //     for(int col=0; col<n-row; col++){
    //         cout << n-row;
    //         if(col!=n-row-1)
    //             cout << "*";
    //     }
    //     cout << endl;
    // }




    // Alphabet Palindrome Pyramid

    int n;
    cout << "Enter the nos : ";
    cin >> n;
    for(int row=0; row<n; row++){
        int col;
        for(col=0; col<row+1; col++){
            int ans = col;
            char ch = ans + 'A';
            cout << ch << " ";
        }
        col = col-1;
        
        for(col; col>0; col--){
            int ans = col-1;
            char ch = ans + 'A';
            cout << ch << " ";
        }

        cout << endl;
    }











    

    
}