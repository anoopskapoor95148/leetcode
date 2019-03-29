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
    TreeNode *newroot = NULL, *tail = NULL;
    TreeNode* increasingBST(TreeNode* root) {
        increasingBST_int (root);
        if (tail)
            tail->right = NULL;
        return newroot;
    }
    void increasingBST_int(TreeNode* root) {
        if (!root)
            return;
        increasingBST_int(root->left);
        if (!newroot) {
            newroot = tail = root;
            newroot->left  = NULL;
        } else  {
            tail->right = root;
            tail        = tail->right;
            tail->left  = NULL;
        }
        increasingBST_int(root->right);
        return;
    }
};
