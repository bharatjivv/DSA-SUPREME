// Char array and strings
#include <iostream>
using namespace std;

int getLength(char name[]);
void reverseCharArray(char arrey[]);
void replaceSpaces(char sentence[]);
bool checkPalindrome(char word[]);
void convertIntoUpperCase(char arr[]);
bool compareString(string a, string b);


int main(){
    /*
    char ch[100];
    cout <<"Enter your name : ";
    cin >> ch;
    cout << "Apka naam " << ch << " hai" << endl;
    */

   /*
   char ch[100];
   ch[0] = 'a';
   ch[1] = 'b';
   cin >> ch[2];

   cout << ch[0] << " " << ch[1] << " " << ch[2] << endl;
   */
   
   /*
   char name[100];
   cin >> name;
   for (int i = 0; i < 7; i++)
   {
        // cout << "index : " << i << " value : " << name[i] << endl;
        cout << name[i];
   }
   */

   /*
   char arr[100];
   // cin >> arr;
    cin.getline(arr, 50);
    cout << arr;
   */
   
    /*
    char name[100];
    cin.getline(name, 50);

    cout << "Length is : " << getLength(name) << endl;
   */
   
   /*
   // Reverse a string
   char arrey[100];
   cin.getline(arrey, 50);
   cout << arrey << endl;
   reverseCharArray(arrey);
   cout << arrey << endl;
    */
   
   /*
   // Replace spaces with character
    char sentence[100];
    cin.get(sentence, 100);

    replaceSpaces(sentence);
    cout << sentence;
   */
   
   /*
   // Palindrome 
   char ar[100] = "racingcar";
   cout << "Palindrome check : "<< checkPalindrome(ar);
   */

    /*
   // Convert small case string to upper case
    char arr[100] = "Babbar";
    convertIntoUpperCase(arr);
    cout << arr;
   */

   // String is a data type whereas char is a data structure 
   

   /*
   string str;
   cout << "Enter a string : ";
   str = "Babbar";
   cout << str << endl;

   cout << "Length : " << str.length() << endl;
   cout << "isEmpty : " << str.empty() << endl;
   
   str.push_back('A');
   cout << "String after pushback : " << str << endl;
   str.pop_back();
   cout << "String after PopBack : " << str << endl;
   
   cout << str.substr(0, 6) << endl;
   
   string a = "Love";
   string b = "love";

   if(a.compare(b) == 0)
        cout << "A and B are exactly same strings " << endl;
    else
        cout << "Not same " << endl;

    string x = "bbbb";
    string y = "bbba";
    cout << x.compare(y) << endl;

    string sentence = "hello jee kese ho saare ";
    string target = "hello";
    string target2 = "jee";
    string target3 = "kese";
    string target4 = "Everyone";
    cout << sentence.find(target) << endl;
    cout << sentence.find(target2) << endl;
    cout << sentence.find(target3) << endl;
    // cout << sentence.find(target4) << endl;

    if(sentence.find(target4) == std::string::npos){
        cout << "Not found " << endl;
    }

    */

   string str = "This is my first message ";
   string word = "Babbar";

   str.replace(0, 4, word);
   cout << str << endl;
   
   string streng = "This is a example string ";
   streng.erase(10, 8);
   cout << streng << endl;
   
   
   
   
   
   
   
   return 0;
   
}



int getLength(char name[]){
    int length = 0;
    int i = 0;

    while(name[i] != '\0'){
        length++;
        i++;
    }
    return length;
} 

void reverseCharArray(char arrey[]){
    int i = 0;
    int n = getLength(arrey);
    int j = n-1;

    while(i<=j){
        swap(arrey[i], arrey[j]);
        i++;
        j--;
    }
}

void replaceSpaces(char sentence[]){
    int i =0;
    int n = getLength(sentence);
    for(int i=0; i<n; i++){
        if(sentence[i] == ' ')
            sentence[i] = '@';
    }
}

bool checkPalindrome(char word[]){
    int i =0;
    int n = getLength(word);
    int j = n-1;

    while(i <= j){
        if(word[i] != word[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

void convertIntoUpperCase(char arr[]){
    int n = getLength(arr);

    for(int i=0; i<n; i++){
    if(arr[i] >='a' && arr[i]<='z')
        arr[i] = arr[i] -'a' + 'A';
    }
}

bool compareString(string a, string b){
    if(a.length() != b.length())
        return false;
    else{
        int j =0;
        for(int i=0; i<a.length(); i++){
            if(a[i] != b[j])
                return false;
        }
    }
    return true;
}