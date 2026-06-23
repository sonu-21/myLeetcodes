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
    bool isValid(TreeNode* root , long long maxval, long long minval) {
        if( !root ) return true;
        if(root->val >= maxval || root->val <= minval) return false;

        return isValid(root->left, root->val, minval )&&
                isValid(root->right, maxval, root->val);
    }
    bool isValidBST(TreeNode* root) {
       return  isValid(root,LLONG_MAX,LLONG_MIN);

    }
};