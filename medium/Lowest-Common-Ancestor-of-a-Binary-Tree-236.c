/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    struct TreeNode *x, *y;
    if (!root) {
        return NULL;
    }
    if (root ==p && root == q)
        return root;
    x = lowestCommonAncestor (root->left, p, q);
    if (x && x != p && x != q)
        return x;
     y = lowestCommonAncestor (root->right, p, q);
    if (y && y != p && y != q)
        return y;
    
    if (!x || !y) {
        if (root == p) {
            return p;
        }
        if (root == q) {
            return q;
        }
        return x?x:y;
    } 
    // This is case where we find parent where and x & y and non zero, p & q
   return root;
}
