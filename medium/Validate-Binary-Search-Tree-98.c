/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool
isValidBST_int (struct TreeNode* root, int min, int max, bool *flag, bool min_flag, bool max_flag)
{
    if (*flag == true)
        return false;
     if (!root)
         return true;
    if ((min_flag == true && (root->val <= min)) || ((max_flag == true) && (root->val >= max))) {
        *flag = true;
        return false;
    }
    return (isValidBST_int (root->left, min, root->val, flag, min_flag,true) &&
          isValidBST_int (root->right, root->val, max, flag, true, max_flag));  
}
bool isValidBST(struct TreeNode* root) {
    int min= 0, max = 0;
    bool flag = false;
    
    return isValidBST_int (root, min, max, &flag, false, false);
}


