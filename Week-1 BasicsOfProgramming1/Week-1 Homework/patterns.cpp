#include <iostream>
using namespace std;

int main(){
    // Square Pattern 
    // int n;
    // cout << "Enter nos : ";
    // cin >> n;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
    


    // Hollow Square pattern 
    // int n;
    // cout << "Enter nos : ";
    // cin >> n;

    // for(int row = 0; row < n; row++){
    //     if(row==0 || row==n-1){
    //         for(int col=0; col<n; col++)
    //             cout << "* ";
    //             cout << endl;
    //     }
    //     else{
    //         for(int col=0; col<n; col++){
    //             if(col==0 || col==n-1)
    //                 cout << "* ";
    //             else{
    //                 cout << "  ";
    //             }
    //         }
    //         cout << endl;
    //     } 
    // }
    

    // Hollow inverted Half Pyramid
    int n;
    cout << "Enter nos : ";
    cin >> n;

    for(int row=0; row<n; row++){
        for(int col=0; col<n-row; col++){
            if(row==0 || col==0 || col==n-row-1)
                cout << "* " ;
            else{
                cout << "  ";
            }
        }
        cout << endl;

    }
    

}