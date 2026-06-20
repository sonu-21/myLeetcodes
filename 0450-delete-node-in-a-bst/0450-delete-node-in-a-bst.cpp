class Solution {
public:
    TreeNode* findLastRight(TreeNode* root) {
        while(root->right) {
            root = root->right;
        }
        return root;
    }

    TreeNode* helper(TreeNode* root) {
        if(!root->left) return root->right;
        if(!root->right) return root->left;

        TreeNode* rightChild = root->right;
        TreeNode* lastRight = findLastRight(root->left);

        lastRight->right = rightChild;

        return root->left;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root) return nullptr;

        if(root->val == key) {
            return helper(root);
        }

        TreeNode* dummy = root;

        while(root) {
            if(key < root->val) {
                if(root->left && root->left->val == key) {
                    root->left = helper(root->left);
                    break;
                }
                root = root->left;
            }
            else {
                if(root->right && root->right->val == key) {
                    root->right = helper(root->right);
                    break;
                }
                root = root->right;
            }
        }

        return dummy;
    }
};