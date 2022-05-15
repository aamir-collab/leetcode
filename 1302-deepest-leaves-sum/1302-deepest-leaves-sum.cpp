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
    int sums = 0;
    int maxDepth(TreeNode* root){
        if(root == NULL){
            return 0;
        }
        return 1+max(maxDepth(root->left), maxDepth(root->right));
    }
    int leavesSum(TreeNode* root, int k){
        if(root == NULL){
            return 0;
        }
        if(k == 0){
            sums += root->val;
        }
        leavesSum(root->left, k-1);
        leavesSum(root->right, k-1);
        return sums;
    }
        
public:
    int deepestLeavesSum(TreeNode* root) {
        int depth = maxDepth(root);
        int sum = leavesSum(root, depth-1);
        return sum;
    }
};