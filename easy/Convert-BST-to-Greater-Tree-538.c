/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* convertBST_int(struct TreeNode* root, int *val) {
    if (!root)
        return NULL;
    convertBST_int(root->right, val);
    root->val +=*val;
    *val       = root->val;
    convertBST_int(root->left, val);
    return root;
}
struct TreeNode* convertBST(struct TreeNode* root) {
       int val = 0;
       return convertBST_int (root, &val);   
}
