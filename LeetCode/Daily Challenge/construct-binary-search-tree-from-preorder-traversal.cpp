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
    TreeNode *bst(TreeNode *root,int ele){
        if(!root) return root=new TreeNode(ele);
        if(root->val>ele){
            root->left=bst(root->left,ele);
        }
        else{
            root->right=bst(root->right,ele);
        }
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode *root=NULL;
        for(int i=0;i<preorder.size();i++){
            root=bst(root,preorder[i]);
        }
        return root;
    }
};
