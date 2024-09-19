#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int data) {
		this -> data = data;
		left = NULL;
		right = NULL;
	}
};

Node* buildTree() {
	int rootData;
	cout << "Enter the data : ";
	cin >> rootData;

	if(rootData == -1) {
		return NULL;
	}

	Node* root = new Node(rootData);

	// Enter the Data for left Node
	root-> left = buildTree();

	// Enter the data for right Node
	root-> right = buildTree();

	return root;
}

int main() {
	cout << "All OK "<< endl;

	Node* root = NULL;
	root = buildTree();


	return 0;
}