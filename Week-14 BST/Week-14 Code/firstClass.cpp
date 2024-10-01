#include <iostream>
#include <queue>
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

Node* buildBinaryTree(Node* &root, int data) {
	if(root == NULL) {
		root = new Node(data);
		return root;
	}

	if(root-> data  > data) {
		root-> left = buildBinaryTree(root->left, data);
	}
	else {
		root-> right = buildBinaryTree(root->right, data);
	}

	return root;
}

void takeInput(Node* &root) {
	int data;
	cin >> data;

	while(data != -1) {
		root = buildBinaryTree(root, data);
		cin >> data;
	}
}

void levelOrderTraversal(Node* root) {
	queue<Node*> q;

	q.push(root);
	q.push(NULL);

	while(!q.empty()) {

		Node* temp = q.front();
		q.pop();

		if(temp == NULL) {
			cout << endl;

			if(!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			cout << temp-> data << " ";

			if(temp -> left) {
				q.push(temp->left);
			}

			if(temp -> right) {
				q.push(temp->right);
			}
		}

	}
}


int main() {
	Node* root = NULL;
	cout << "Enter the data for the tree : ";

	takeInput(root);
	cout << "Printing the Tree : " << endl;
	levelOrderTraversal(root);

	return 0;
}