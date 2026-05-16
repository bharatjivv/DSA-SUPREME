#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){
    // {
    //     //Creation
    //     unordered_map<string, int> myCars;
        
    //     // insertion
    //     pair <string, int> p = make_pair("Fortuner", 4);
    //     myCars.insert(p);
        
    //     pair <string, int> p2("Gwagon", 2);
    //     myCars.insert(p2);
        
    //     myCars["Mclaren"] = 8;
        
    //     //access
    //     cout << myCars["Fortuner"] << endl;
    //     cout << myCars.at("Mclaren") << endl;
        
    //     // if an entry is not in the list, it'll create it and by default initialize it to zero
    //     cout << myCars.size() << endl;
    //     cout << myCars["Porche"] << endl;
    //     cout << myCars.size() << endl;
        
    //     // searching 
    //     cout << "Searching for Porche : " << myCars.count("Porche") << endl;
    //     cout << "Searching for Ferrari : " << myCars.count("Ferrari") << endl;
        
    //     if(myCars.find("Fortuner") != myCars.end()){
    //         cout << "Fortuner Found in Garage" << endl;
    //     }
    //     else{
    //         cout << "Fortuner Not Found " << endl;
    //     }
  
    // }
    
    
    string str = "annapuramgannapuramchandrapuram";
    map<char, int> freq;
    
    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        freq[ch]++;
    }
    
    for(auto val : freq){
        cout << val.first << " -> " << val.second << endl;
    }

    return 0;
}