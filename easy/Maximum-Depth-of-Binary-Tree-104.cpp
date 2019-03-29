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
int maxDepth(struct TreeNode* root) {
    int l, r;
    if (!root)
        return 0;
    l = maxDepth(root->left);
    r = maxDepth(root->right);
    
    return max(l,r) +1;
}
  int   max (int left, int right)
{
    if (left > right)
        return left;
    return right;
}
};
