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
 
 // Recursion waale scene me dikkat jaari hai bas  
 // Recursion waale case ki aur zyada practice karni padegi aur bhot saare examples dekhne padenge tabhi perfection aa payega
 
 
 
class Solution {
public:
    TreeNode* solve(vector<int> &ans, int s, int e){
        if(s>e)
            return NULL;
        
        int mid = s+(e-s)/2;
        int element = ans[mid];

        TreeNode* leftSubtree = solve(ans, s, mid-1);
        TreeNode* rightSubtree = solve(ans, mid+1, e);


        return new TreeNode(ans[mid], leftSubtree, rightSubtree);
    }

    void inorder(TreeNode* root, vector<int> &ans){
        if(root== NULL)
            return ;
        
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }


    TreeNode* balanceBST(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);
        int size = ans.size();
        TreeNode* balancedAns = solve(ans, 0, size-1);
        return balancedAns;
    }
};