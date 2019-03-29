/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int
max (int a, int b) {
    if (a >= b)
        return a;
    return b;
}

int
height(struct TreeNode* root) {
    int l,r;
    if (!root)
        return 0;
    l = height (root->left);
    r = height (root->right);
    return (max(l,r)+1);
}
int diameterOfBinaryTree(struct TreeNode* root) {
    int l, r, ld, rd;
    if (!root)
        return 0;
    ld = diameterOfBinaryTree(root->left);
    rd = diameterOfBinaryTree(root->right);
    l = height(root->left);
    r = height(root->right);
    return (max((l+r), max(ld,rd))); 
}
