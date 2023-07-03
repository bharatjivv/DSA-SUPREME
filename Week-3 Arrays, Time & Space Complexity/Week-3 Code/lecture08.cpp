// Arrays Class 2 
#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int> arr);

int main(){
/*

    // Create vector array
    vector<int> arr;
    vector<char> arre;
    vector<bool> arrey;
    vector<int> charrey{10, 20, 30, 40, 50};
    cout << "Printing charrey : ";
    for(int i=0; i<charrey.size(); i++){
        cout << charrey[i] << " ";
    }cout << endl;

    cout << "Size of an empty vector arr : " << arr.size() << endl;
    cout << "Capacity of vector arr : " << arr.capacity() << endl;
    
    // Insert in vector array
    cout << "Pushing values into the array" << endl;
    arr.push_back(5);
    arr.push_back(6);

    // Print vector array
    cout << "Printing the vector array : ";
    for(int i=0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Remove 
    cout << "Removing element from vector array" << endl;
    arr.pop_back();

    // Print vector array 
    cout << "Printing vector array after removing element : ";
    for(int i=0;i<arr.size(); i++){
        cout << arr[i] << " ";
    } cout << endl;

    // Creating a vector array of size 10
    cout << "Creating a vector array of size 10" << endl;
    vector<int> brr(10);
    cout << "Size of brr : " << brr.size() << endl;
    cout << "Capacity of brr : " << brr.capacity() << endl;

    cout << "Printing elements of creating brr array : ";
    for(int i=0; i<brr.size(); i++){
        cout << brr[i] << " ";
    } cout << endl;

    // Creating and Initializing in vector array
    cout << "Created a vector array and initialized with 101 " << endl;
    vector<int> crr(10, 101);
    cout << "Printing the elements of vector array : ";
    for(int i=0; i<crr.size(); i++){
        cout << crr[i] << " ";
    } cout << endl;

    cout << "Creating a vector array of custom size entered by user : " << endl;
    int n;
    cout << "Enter the size of vector array : ";
    cin >> n;
    
    vector<int> drr(n, 369);
    
    cout << "Printing the custom created vector array : ";
    for(int i=0; i<drr.size(); i++){
        cout << drr[i] << " ";
    } cout << endl;

    cout << "Checking if vector is empty or not : " << drr.empty() << endl;
*/
    
    
    // Find Unique Element 
    /*
    int n;
    cout << "Enter the size of array " << endl;
    cin >> n;
    
    vector<int> arr(n);
    cout << "Enter the elements : ";

    for(int i=0; i<arr.size(); i++){
        cin >> arr[i];
    }
    
    int uniqueElement = findUnique(arr);
    cout << "Unique element is : " << uniqueElement << endl;
    */

    
    // Union of Two Arrays (assuming no duplicates)
    /*
    int arr[] = {1, 3, 5, 7, 9};
    int sizea=5;
    int brr[] = {2, 4, 6, 8};
    int sizeb=4;
    vector<int> ans;

    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);
    }
    for(int i=0; i<sizeb; i++){
        ans.push_back(brr[i]);
    }

    cout << "Printing ans array : ";
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;
    
    */
    
    
    // Intersection of Two Arrays 
    /*
    int arr[] = {1, 3, 5, 7, 9};
    int sizea = 5;
    int brr[] = {3, 4, 5, 8, 10};
    int sizeb = 5;
    
    vector <int> ans;
    
    for(int i=0; i<sizea; i++){
        for(int j=0; j<sizeb; j++){
            if(arr[i]== brr[j]){
                ans.push_back(arr[i]);
                brr[j] = INT_MIN;
            }
        }
    }
    cout << "Common elements in the array are : ";
    for(auto value: ans){
        cout << value << " ";
    }
    */


   // Union of Two Arrays (with handling Duplicates)
   /*
   vector<int> arr = {2, 4, 6, 8, 9, 11, 13, 15, 16, 18};
   vector<int> brr = {1, 3, 5, 7, 9, 12, 14, 16, 18};

    vector<int> ans;

    for(int i=0; i<arr.size(); i++){
        ans.push_back(arr[i]);
        for(int j=0; j<brr.size(); j++){
            if(arr[i]== brr[j])
                brr[j] = INT_MIN;
        }
    }

    for(int i=0; i<brr.size(); i++){
        if(brr[i]==INT_MIN)
            continue;
        ans.push_back(brr[i]);
    }

    cout << "Union array is : ";
    for(int i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;
    */


   // Pair Sum (Find a pair that upon addition gives the sum)
   /* 
   vector<int> arr{10, 20, 30, 40, 50, 60, 70, 80};

    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == 80)
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
        }
    }
    */


   // Triplets Sum
   /*
    vector<int> arr {10, 20, 30, 40};
    int sum = 70;
    for(int i=0; i<arr.size(); i++){
        for(int j=i+1; j<arr.size(); j++){
            for(int k=j+1; k<arr.size(); k++){
                if(arr[i] + arr[j] + arr[k] == sum)
                    cout << "(" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
            }
        }
    }
    */


   // Sort 0's and 1's 
   vector<int> arr{1, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1};
   int start = 0;
   int end = arr.size() - 1;

    for(auto i: arr){
        cout << i << " ";
    }cout << endl;
    
    while(start<=end){
        if(arr[start]==0)
            start++;
        
        if(arr[end]==1)
            end--;
        
        else
            swap(arr[start], arr[end]);
    }

    for(auto value: arr){
        cout << value << " ";
    }
    
    
    





    








    
    
}


int findUnique(vector<int> arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++){
        ans = ans^arr[i];
    }
    return ans;
}