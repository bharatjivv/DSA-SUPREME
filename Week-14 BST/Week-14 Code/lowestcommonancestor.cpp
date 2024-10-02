#include <iostream>
#include <queue>
using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int data) {
		this->data = data;
		left = NULL;
		right = NULL;
	}
};

Node* buildBinaryTree(Node* &root, int data) {
	if(root == NULL) {
		root = new Node(data);
		return root;
	}

	if(root-> data > data) {
		root-> left = buildBinaryTree(root->left, data);
	}
	else {
		root-> right = buildBinaryTree(root->right, data);
	}

	return root;
}

void takeInput(Node* &root) {
	cout << "Enter the input for tree : ";
	int data;
	cin >> data;

	while(data != -1) {
		buildBinaryTree(root, data);
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
			if(!q.empty())
				q.push(NULL);
		}
		else {
			cout << temp -> data << " ";
			if(temp-> left)
				q.push(temp->left);

			if(temp-> right)
				q.push(temp->right);
		}
	}
}

Node* lowestCommonAncestorinBST(Node* root, Node* p, Node* q) {
	if(root == NULL)
		return NULL;

	if((p->data > root-> data) && (q->data > root->data)) {
		lowestCommonAncestorinBST(root->right, p, q);
	}

	if((p->data < root->data) && (q->data < root->data)) {
		lowestCommonAncestorinBST(root->left, p, q);
	}
	else {
		return root;
	}
}

int main() {
	Node* root = NULL;

	takeInput(root);

	cout << endl << "Printing the Binary Tree : " << endl;
	levelOrderTraversal(root);


	return 0;
}