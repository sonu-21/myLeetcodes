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
   int check(TreeNode* root,int& maxsum) {
    
    if(root == nullptr){
        return 0;
    }
    int left = max(0,check(root->left,maxsum));
    int right = max(0,check(root->right,maxsum));

       maxsum = max(maxsum,root->val+left+right);

     return root->val + max(left,right);

   }
    int maxPathSum(TreeNode* root) {
        int maxsum = INT_MIN;

        check(root,maxsum);

        return maxsum;

    }
};