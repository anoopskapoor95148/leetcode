/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void findSecondMinimumValue_int(struct TreeNode* root, int *val1, int *val2) {
    if (!root)
        return;
    if (root->val < *val1) {
        *val2 = *val1;
        *val1 = root->val;
    } else {
        if (root->val != *val1 && root->val < *val2) {
            *val2 = root->val;
        }
    }
    
    findSecondMinimumValue_int (root->left, val1, val2);
    findSecondMinimumValue_int (root->right, val1, val2);
    return;
}
int findSecondMinimumValue(struct TreeNode* root) {
    if (!root)
        return -1;
    int val1 = INT_MAX, val2 = 0;
    findSecondMinimumValue_int (root, &val1, &val2);
    if (val2 == INT_MAX)
        return -1;
    return val2;
    
}
