#include <iostream>
#include <queue>

using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int data) {
		this-> data = data;
		this-> left = NULL;
		this-> right = NULL;
	}
};

Node* buildBinaryTree(Node* &root, int data) {

	if(root == NULL) {
		root = new Node(data);
		return root;
	}

	if(root -> data > data) {
		root -> left = buildBinaryTree(root->left, data);
	}
	else {
		root -> right = buildBinaryTree(root->right, data);
	}

	return root;
}

void takeInput(Node* &root) {
	int data;
	cin >> data;

	while(data != -1) {
		buildBinaryTree(root, data);
		cin >> data;
	}
}

void levelOrderTraversal(Node* &root) {
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

			if(temp-> left) {
				q.push(temp-> left);
			}
			if(temp -> right) {
				q.push(temp-> right);
			}
		}
	}
}

void preOrderTraversal(Node* root) {
	// NLR
	if(root == NULL)
		return ;

	cout << root -> data << " ";
	preOrderTraversal(root-> left);
	preOrderTraversal(root-> right);
}

void postOrderTraversal(Node* root) {
	// LRN
	if(root == NULL)
		return ;

	postOrderTraversal(root-> left);
	postOrderTraversal(root-> right);
	cout << root-> data << " ";
}

void inOrderTraversal(Node* root) {
	// LNR
	if(root == NULL)
		return;

	inOrderTraversal(root-> left);
	cout << root-> data << " ";
	inOrderTraversal(root-> right);
}

bool findNode(Node* root, int target) {
	if(root == NULL)
		return false;

	if(root-> data == target)
		return true;

	if(target > root-> data)
		return findNode(root->right, target);
	else
		return findNode(root->left, target);

}

Node* findNodeinBST(Node* root, int target) {
	if(root == NULL) {
		return NULL;
	}

	if(root == target){
		return root;
	}
	
	if(root-> data > target) {
		return findNodeinBST(root-> left, target);
	}
	else {
		return findNodeinBST(root->right, target);
	}
}

int minVal(Node* root) {
	Node* temp = root;

	if(temp-> data == -1)
		return -1;

	while(temp-> left != NULL) {
		temp = temp -> left;
	}

	return temp-> data;
}

int maxVal(Node* root) {
	Node* temp = root;

	if(temp-> data == -1)
		return -1;

	while(temp-> right != NULL) {
		temp = temp -> right;
	}

	return temp-> data;
}

Node* deleteNodeinBST(Node* root, int target) {
	// Step 1: find node in BST.

	// Step 2: Figure out which one of the four cases it is.

	// Step 3: Delete that shit.

	// Step 4: Place its child nodes at the right place.
}

Node* deleteNodeInBST(Node* root, int target) {
	//base cae
	if(root == NULL ) {
		return NULL;
	}
	
	if(root->data == target) {
		//isi ko delete krna h
		//4 cases
		if(root->left == NULL && root->right == NULL) {
			//leaf node
			//delete root;
			return NULL;
		}
		else if(root->left == NULL && root->right != NULL) {
			Node* child = root->right;
			//delete root;
			return child;
		}
		else if(root->left != NULL && root->right == NULL) {
			Node* child  = root->left;
			//delete root;
			return child;
		}
		else {
			//both child
			//find inorder predecessor inb left subtree
			int inorderPre = maxVal(root->left);
			//replace root->data value with inorder predecessor
			root->data = inorderPre;
			//delete inorder predecessor from left subtree
			root->left = deleteNodeInBST(root->left,inorderPre);
			return root;

		}

	}
	
	else if(target > root -> data) {
		//right jana chahiye
		root->right =  deleteNodeInBST(root->right, target);
	}
	
	else if(target < root->data) {
		//left jana chahioye
		root->left = deleteNodeInBST(root->left, target);
	}
	
	return root;
}


int main() {
	Node* root = NULL;
	cout << "Enter the values of the binary tree : " ;
	takeInput(root);

	levelOrderTraversal(root);

	// 	{
	// 		cout << endl << "Printing Pre-order Traversal : ";
	// 		preOrderTraversal(root);

	// 		cout << endl << "Printing Postorder Traversal : ";
	// 		postOrderTraversal(root);

	// 		cout << endl << "Printing in Order Traversal  : ";
	// 		inOrderTraversal(root);

	// 		bool found = findNode(root, 155);

	// 		if(found)
	// 			cout << endl << "The node is present";
	// 		else
	// 			cout << endl << "The node is not present";

	// 		int minimumVal = minVal(root);
	// 		cout << endl << "Minimum value in the tree is : " << minimumVal;

	// 		int maximumVal = maxVal(root);
	// 		cout << endl << "Maximum value in the tree is : " << maximumVal;
	// 	}







	return 0;
}





// 10 20 5 11 17 2 4 8 6 25 15 -1
// inorder predecessor and inorder successor question solve homework

