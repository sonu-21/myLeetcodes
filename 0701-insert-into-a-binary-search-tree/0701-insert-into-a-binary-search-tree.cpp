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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
            if( !root )  return new TreeNode(val);
               TreeNode* curr = root;
            while(curr) {
                if(curr->val < val && curr->right == nullptr) {
                    curr->right = new TreeNode(val);
                    break;
                }
                else if(curr->val > val && curr->left == nullptr){
                    curr->left = new TreeNode(val);
                    break;
                }
                if( curr-> val < val) curr = curr->right ;
                else curr = curr->left ;

            }

            return root;




    }
};