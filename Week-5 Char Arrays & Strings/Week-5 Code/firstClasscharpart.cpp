#include <iostream>
using namespace std;

int getlength(char ch[]){
    int i = 0;
    
    while(ch[i] != '\0'){
        i++;
    }
    return i;
}

int main() {
	char ch[50];

// 	cout << "Enter the val for 0th index : " ;
// 	cin >> ch[0];
// 	cout << "Value entered is : " << ch[0] << endl;

// 	cout << "Enter the val for 3rd index : " ;
// 	cin >> ch[2];
// 	cout << "Value entered is : " << ch[2] << endl;

// 	cout << "Enter the val for 6th index : " ;
// 	cin >> ch[6];
// 	cout << "Value entered is : " << ch[6] << endl;

// 	cout << "Enter the val for 49th index : " ;
// 	cin >> ch[49];
// 	cout << "Value entered is : " << ch[49] << endl;

// 	cout << "Enter complete character array " << ch << endl;

	

    cout << "Enter a string again with spaces in them : ";
    cin.getline(ch, 50);
    cout << "Printing the complete character array : " << ch << endl;
    
    cout << "Length of character array is : " << getlength(ch) << endl;

	return 0;
}