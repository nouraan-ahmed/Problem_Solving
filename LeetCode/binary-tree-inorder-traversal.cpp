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
    vector <int> v;
    vector<int> inorderTraversal(TreeNode* root) {
        stack <int> st;
        if(root==NULL){
            return {};
        }
        if(root->left!=NULL){
        inorderTraversal(root->left);
        }
        v.push_back(root->val);
        if(root->right!=NULL){
        inorderTraversal(root->right);
        }
        return v;
    }
};
