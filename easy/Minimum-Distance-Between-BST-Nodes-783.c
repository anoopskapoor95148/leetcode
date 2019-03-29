/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void minDiffInBST_int(struct TreeNode* root, int *left, int *min_val) {
    if (!root)
        return;
    minDiffInBST_int (root->left, left, min_val);
    if (*left != INT_MAX &&  ((*min_val) > (root->val - *left))) {
        *min_val = root->val - *left;
    }
    *left = root->val;
    minDiffInBST_int (root->right, left, min_val);
    return;
}

int minDiffInBST(struct TreeNode* root) {
    int min_val = INT_MAX;
    int left = INT_MAX;
    
    minDiffInBST_int (root, &left, &min_val);
    if (min_val == INT_MAX)
        return 0;
    return min_val;
}
