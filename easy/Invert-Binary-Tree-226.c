/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* invertTree(struct TreeNode* root) {
     struct TreeNode *tmp;
     if (!root)
            return NULL;
      invertTree (root->left);
      invertTree (root->right);
      tmp  = root->left;
      root->left = root->right;
      root->right = tmp;
      return root;

}
