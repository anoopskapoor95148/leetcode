/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int findTilt_int(struct TreeNode* root , int *val) {
    if (!root)
        return 0;
    int left=0, right=0,diff=0;
    
   left  = findTilt_int (root->left, val);
   right = findTilt_int (root->right, val);
   if (left > right)
        diff = left - right;
    else
        diff = right - left;
    *val += diff;
    return (left+right+root->val);
}


int findTilt(struct TreeNode* root) {
    int val = 0;
    if (!root)
        return 0;
    findTilt_int (root, &val);
    return val;
}
