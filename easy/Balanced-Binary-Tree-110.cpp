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
    bool flag = false;
    bool isBalanced(TreeNode* root) {
        isBalanced_int(root);
        return !flag;
    }
    int isBalanced_int(TreeNode* root) {
        if (!root)
            return 0;
        if (flag == true)
            return 0;
        int l, r;
        l = isBalanced_int (root->left);
        r = isBalanced_int (root->right);
        return (max(l,r) +1);
    }
    int max (int l, int r) {
        if (l > r) {
            if (l -r > 1)
                flag = true;
            return l;
        }
        if (r -l > 1)
            flag = true;
        return r;
    }
};
