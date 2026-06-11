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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>>nodes;
        queue<pair<TreeNode*,pair<int,int>>>todos;
        todos.push({root,{0,0}});

        while( !todos.empty() ) {
            auto p = todos.front();
            todos.pop();
            TreeNode* temp = p.first;

            int x = p.second.first;
            int y = p.second.second;

            nodes[x][y].insert(temp->val);

            if(temp->left) {
                todos.push({temp->left, {x-1,y+1}});
            }
            if(temp->right) {
                todos.push({temp->right,{x+1,y+1}});
            }
        }
        vector<vector<int>>ans;

        for(auto x:nodes){
            vector<int>col;
            for(auto y : x.second){
                col.insert(col.end(),y.second.begin(),y.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};