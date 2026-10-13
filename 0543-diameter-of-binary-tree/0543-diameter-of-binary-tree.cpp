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
int mx=0;
    int dia(TreeNode* root){
        if(root==NULL) return -1;
        int left = dia(root->left);
        int right = dia(root->right);
         mx = max(mx,left+right+2);
        return 1+max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        dia(root);
        return mx;
    }
};