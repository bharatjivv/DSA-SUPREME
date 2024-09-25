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
		left = NULL;
		right = NULL;
	}
};

Node* buildTree() {
	int data;
	cout << "Enter the data : ";
	cin >> data;

	if(data == 0)
		return NULL;


	Node* root = new Node(data);

	cout << "Enter the left part of the root " << endl;
	root-> left = buildTree();

	cout << "Enter the right part of the root " << endl;
	root-> right = buildTree();

	return root;
}

void levelOrderTraversal(Node* root) {
	cout << "inside level order levelOrderTraversal" << endl;
	queue <Node* > q;
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
				q.push(temp->left);
			}

			if(temp -> right) {
				q.push(temp->right);
			}
		}

	}
}

void inOrderTraversal(Node* root) {
	if(root == NULL)
		return ;

	inOrderTraversal(root-> left);
	cout << root-> data << " ";
	inOrderTraversal(root-> right);
}

void preOrderTraversal(Node* root) {
	if(root == NULL)
		return;

	cout << root-> data << " ";
	preOrderTraversal(root->left);
	preOrderTraversal(root->right);
}

void PostOrderTraversal(Node* root) {
	if(root == NULL)
		return;

	PostOrderTraversal(root->left);
	PostOrderTraversal(root->right);
	cout << root-> data << " ";
}

int height(Node* root){
    if(root == NULL)
        return 0;
        
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    int ans = max(leftHeight, rightHeight) + 1;
    
    return ans;
}


int main() {

	cout << "Lets gooo " << endl;
	Node* root = NULL;
	root = buildTree();

	levelOrderTraversal(root);

	cout << endl << "Inorder Traversal of tree : ";
	inOrderTraversal(root);

	cout << endl << "Preorder Traversal of tree : ";
	preOrderTraversal(root);

	cout << endl << "PostOrder Traversal of tree : ";
	PostOrderTraversal(root);

    int ans = height(root);

    cout << endl << "Max height is : " << ans;
    
	return 0;
}