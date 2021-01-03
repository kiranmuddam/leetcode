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
    int maxDepth(TreeNode* root) {
        TreeNode *left = root;
        TreeNode *right = root;
        
        if (root == NULL) {
            return 0;
        }
        
        int maxDepthLeft = maxDepth(root -> left);
        int maxDepthRight= maxDepth(root -> right);
        
        return (maxDepthLeft > maxDepthRight) ? maxDepthLeft + 1 : maxDepthRight + 1;
    }
};