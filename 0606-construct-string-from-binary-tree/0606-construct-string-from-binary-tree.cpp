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
    string tree2str(TreeNode* root) {
        
        string str="";
        if(root == NULL) return str;
        
        str = str + to_string(root->val);
        
        if(root->left)
            str = str + "(" + tree2str(root->left) + ")";
        else if(root->right)
            str = str + "()";
        
        if(root->right)
            str = str + "(" + tree2str(root->right) + ")";
        
        return str;
    }
};