// Arrays Class 3 
#include <iostream>
#include <vector>
using namespace std;

void printRowWiseSum(int arr[][3], int rows, int cols);
void printColWiseSum(int arr[][3], int rows, int cols);
bool findKey(int arr[][3], int rows, int cols, int key);
int findMax(int arr[][3], int rows, int cols);
int findMin(int arr[][3], int rows, int cols);
void transposeTheMatrix(int arr[][3], int rows, int cols, int transposeArr[][3]);
void printArray(int arr[][3], int rows, int cols);


int main(){
    // Declare 2D array
    // int arr[3][3];

    /*
    // Initialization
    int brr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // Printing array column wise
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << brr[j][i] << " ";
        }cout << endl;
    }

    // Printing array row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << brr[i][j];
        }
    }cout << endl;
    */


    /*
    int rows = 4;
    int cols = 3;
    int arr[4][3];

    cout << "Enter elements of the array : ";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> arr[i][j];
        }
    }

    // Printing row wise
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << "~~";
        }cout << endl;
    }
    */
    
   /*
    int arr[3][3];
    int rows = 3;
    int cols = 3;

    cout << "Taking input values : ";
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin >> arr[i][j];
        }
    }

    cout << "Printing the array : " << endl;

    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        } cout << endl;
    }cout << endl;

    cout << "Row wise sum of the array " << endl;
    printRowWiseSum(arr, rows, cols);
    cout << "Column wise sum of array " << endl;
    printColWiseSum(arr, rows, cols);

    cout << "Enter the key you want to find in 2D array ";
    int key;
    cin >> key;
    
    if(findKey(arr, rows, cols, key))
        cout << "Key is Present";
    else
        cout << "Key not present";
    */
    
    
    /*
    // Max/Min in a 2D array
    int rows=3;
    int cols=3;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 156, 6},
        {7, 8, 9}
    };

    cout << "Largest element in the array is : " << findMax(arr, rows, cols) << endl;
    cout << "Minimum element in the array is : " << findMin(arr, rows, cols) << endl;
    */


    /*
    // Transpose a matrix
    int rows=3;
    int cols=3;
    int transposeArr[3][3];
    int arr[3][3] = {
        {1, 2, 3}, 
        {4, 5, 6}, 
        {7, 8, 9}
    };
    
    printArray(arr, rows, cols);
    transposeTheMatrix(arr, rows, cols, transposeArr);
    printArray(transposeArr, rows, cols);
    */
    
    /*
    // 2D Vectors
    vector<vector<int> > arr;

    vector<int> a{1, 2, 3};
    vector<int> b{2, 4, 6};
    vector<int> c{1, 3, 7};

    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
    
    // for(int i=0; i<arr.size(); i++){
    //     for(int j=0; j<arr[0].size(); j++){
    //         cout << arr[i][j] << " ";
    //     }cout << endl;
    // }
    */


   /*
    int row=3;
    int col=5;
    vector<vector<int> > arr(row, vector<int>(col, 101));
    
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr[i].size(); j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }
    */
    
    
    int rows = 5;
    int cols = 5;
    vector<vector<int> > arrey(rows, vector<int>(cols, -8));

    for(int i=0; i<arrey.size(); i++){
        for(int j=0; j<arrey.size(); j++){
            cin >> arrey[i][j];
        }
    }
    cout << endl;
    for(int i=0; i<arrey.size(); i++){
        for(int j=0; j<arrey.size(); j++){
            cout << arrey[i][j] << "-";
        }cout << endl;
    }
    
    





    
    return 0;
}



void printRowWiseSum(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum = sum + arr[i][j];
        }
        cout << "Row nos : " << i << " - Sum is : " << sum << endl;
    }cout << endl;
    
}

void printColWiseSum(int arr[][3], int rows, int cols){
    for(int i=0; i<cols; i++){
        int sum = 0;
        for(int j=0; j<rows; j++){
            sum = sum + arr[j][i];
        }
        cout << "Column nos " << i << " has sum : " << sum << endl;
    }cout << endl;
}

bool findKey(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(key==arr[i][j])
                return true;
        }
    }
    return false;
}


int findMax(int arr[][3], int rows, int cols){
    int maxi = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j] > maxi)
                maxi = arr[i][j];
        }
    }
    return maxi;
}


int findMin(int arr[][3], int rows, int cols){
    int mini = INT_MAX;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]< mini)
                mini = arr[i][j];
        }
    }
    return mini;
}

void transposeTheMatrix(int arr[][3], int rows, int cols, int transposeArr[][3]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            transposeArr[j][i] = arr[i][j];
        }
    }
}


void printArray(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << arr[i][j] << " ";
        }cout << endl;
    }cout << endl;
}