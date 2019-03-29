/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isUnivalTree_int(struct TreeNode* root, int val, int *flag) {
    if (*flag == true)
        return false;
    if (!root)
        return true;
    if (root->val != val) {
        *flag = true;
        return false;
    }
    return (isUnivalTree_int (root->left, val, flag) &&
            isUnivalTree_int (root->right, val, flag)); 
}
        
bool isUnivalTree(struct TreeNode* root) {
    int flag = false;
    int val;
    if (!root)
        return false;
    val = root->val;
    return isUnivalTree_int (root, val, &flag);
}
