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

void levelOrderTraversal(Node* root) {
	queue <Node*> q;
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
			cout << temp -> data << " ";

			if(temp -> left) {
				q.push(temp-> left);
			}
			if(temp -> right) {
				q.push(temp -> right);
			}
		}

	}
}

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

void inorderTraversal(Node* root) {
	if(root == NULL)
		return ;

	inorderTraversal(root-> left);

	cout << root -> data << " ";

	inorderTraversal(root-> right);
}

void preorderTraversal(Node* root) {
	if(root == NULL)
		return ;

	cout << root -> data << " ";

	preorderTraversal(root-> left);

	preorderTraversal(root-> right);
}

void postorderTraversal(Node* root) {
	if(root == NULL)
		return ;

	postorderTraversal(root-> left);

	postorderTraversal(root-> right);

	cout << root -> data << " ";

}

int main() {
	cout << "All OK "<< endl;

	Node* root = NULL;
	root = buildTree();

	cout << "levelOrderTraversal : " << endl;
	levelOrderTraversal(root);
	cout << endl;

	cout << "Starting inorderTraversal : ";
	inorderTraversal(root);
	cout << endl;

	cout << "Starting preorderTraversal : ";
	preorderTraversal(root);
	cout << endl;

	cout << "Starting postorderTraversal : ";
	postorderTraversal(root);
	cout << endl;


	return 0;
}