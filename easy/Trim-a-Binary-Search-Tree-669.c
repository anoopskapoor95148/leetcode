/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* trimBST_int (struct TreeNode* root, int L, int R) {
    if (!root)
        return NULL;
    if (root->val >= L && root->val <= R) {
             root->left = trimBST_int (root->left, L, R);
             root->right = trimBST_int (root->right, L, R);
             return root;
    } else {
        if (root->val < L) {
            return trimBST_int (root->right, L, R);
        }
    }
    return trimBST_int (root->left, L, R);
}
struct TreeNode* trimBST(struct TreeNode* root, int L, int R) {
        return trimBST_int (root, L, R);   
}
