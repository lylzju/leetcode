/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root)
        {
            int x = maxDepth(root->left), y = maxDepth(root->right);
            return (x > y ? x : y) + 1;
        }
        else
        {
            return 0;
        }
    }
};
