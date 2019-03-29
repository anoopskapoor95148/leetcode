/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode*
next_successor_val(struct TreeNode* root) {
       while (root->left) {
                root = root->left;
       }
       return root->val;
}
struct TreeNode*
deleteNode_int (struct TreeNode* root)
{   struct TreeNode* p= NULL;
    struct TreeNode* deleteNode(struct TreeNode* root, int key);
 
    if (root->left && root->right) {
        root->val = next_successor_val(root->right);
        root->right = deleteNode(root->right, root->val);
        return root;
    }
    if (root->left) {
        p = root->left;
        // free(root);
        // return p;
    }
    if (root->right) {
        p = root->right;
        // free(root);
        // return p;
    }
    free(root);
    return p;   
}
struct TreeNode* deleteNode(struct TreeNode* root, int key) {
      if (!root)
          return NULL;
      if (root->val == key)
          return deleteNode_int(root);
      if (root->val > key) {
          root->left = deleteNode (root->left, key);
      } else {
          root->right = deleteNode (root->right, key);
      }
      return root;
}
