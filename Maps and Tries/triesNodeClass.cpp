#include <iostream>
using namespace std;

class TrieNode {
public:
	char data;
	TrieNode* children[26];
	bool isTerminal;

	TrieNode(char d) {
		this->data = d;
		for(int i=0; i<26; i++) {
			children[i] = NULL;
		}
		this->isTerminal = false;
	}
};

void insertword(TrieNode* root, string word){
    // base case
    // cout << "Inserting : " << word << endl;
    if(word.length() == 0){
        root->isTerminal = true;
        return ;
    }
    
    char ch = word[0];
    int index = ch - 'A';
    TrieNode* child;
    // present
    if(root->children[index] != NULL){
        child = root->children[index];
    }
    else{
        child = new TrieNode(ch);
        root->children[index] = child;
    }
    
    // recursion
    insertword(child, word.substr(1));
}

bool searchword(TrieNode* root, string word){
    // base case 
    // cout << "Searching word : " << word << endl;
    
    if(word.length() == 0){
        return root->isTerminal;
    }
    
    char ch = word[0];
    int index = ch - 'A';
    TrieNode* child;
    
    // present
    if(root->children[index] != NULL){
        child = root->children[index];
    }
    else{
        return false;
    }
    
    // rec call
    return searchword(child, word.substr(1));
}

int main() {
    TrieNode* root = new TrieNode('\0');
    
    insertword(root, "coding");
    insertword(root, "code");
    insertword(root, "coder");
    insertword(root, "codehelp");
    insertword(root, "babbar");
    insertword(root, "dad");
    insertword(root, "dada");
    insertword(root, "dadi");
    insertword(root, "daddy");
    insertword(root, "baby");
    
    cout << endl << "Searching : ";
    
    if(searchword(root, "code")){
        cout << "Word found " << endl;
    }
    else{
        cout << "Not Found ";
    }
    
    
    
	return 0;
}