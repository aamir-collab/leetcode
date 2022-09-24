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
    vector<int>path;
    vector<vector<int>> ans;
    void traverse(TreeNode* root, int targetSum, int sum){
        if(!root){
            return;
        }
        sum+=root->val;
        path.push_back(root->val);
        if(!root->left && !root->right){
            if(sum == targetSum){
                ans.push_back(path);
            }
        }
        else{
                traverse(root->left, targetSum, sum);
                traverse(root->right, targetSum, sum);
            }
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        traverse(root,targetSum,0);
        return ans;
    }
};