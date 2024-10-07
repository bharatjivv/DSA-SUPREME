/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */


class Solution {
public:

	int maxVal(Node* root) {
		Node* temp = root;

		if(temp-> data == -1)
			return -1;

		while(temp-> right != NULL) {
			temp = temp -> right;
		}

		return temp-> data;
	}

	TreeNode* deleteNode(TreeNode* root, int key) {
		if(root->val == key) {
			// perform operations on this Node

			if((root->left == NULL) && (root->right == NULL)) {
				delete root;
				return NULL;
			}

			if((root->left != NULL) && (root->right == NULL)) {
				TreeNode* child = root->left;
				delete root;
				return child;
			}

			if((root->left == NULL) && (root->right != NULL)) {
				TreeNode* child = root->right;
				delete root;
				return child;
			}

			else {
				int inorderPre = maxVal(root->left);
				root->val = inorderPre;
				root->left = deleteNodeInBST(root->left, key);
			}
		}

		if(root->val > key) {
			// perform operations on left part of the tree
			root->left = deleteNodeInBST(root->left, key);
		}
		else {
			root->right = deleteNodeInBST(root->right, key);
		}

		return root;
	}

};