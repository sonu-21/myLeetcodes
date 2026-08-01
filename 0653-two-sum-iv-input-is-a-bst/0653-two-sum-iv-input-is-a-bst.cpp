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
    unordered_map<int,int>mpp;
    bool findTarget(TreeNode* root, int k) {
        
        while(root){
            if(!root) return false;
            if(mpp.contains(k-root->val)) return true;

            mpp[root->val]++;

            return findTarget(root->left,k)||findTarget(root->right,k);

            
        }

        return false;

    }
};