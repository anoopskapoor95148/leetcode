/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSameTree(struct TreeNode* p, struct TreeNode* q, bool *flag) {
     if (*flag == true)
         return false;
     if (!p && !q)
         return true;
      if (!p || !q) {
          *flag = true;
          return false;
      }
      if (p->val != q->val) {
          *flag = true;
          return false;
      }
      return (isSameTree (p->left, q->right, flag)  && isSameTree (p->right, q->left, flag));
    
}

bool isSymmetric(struct TreeNode* root) {
    if (!root)
        return true;
     bool flag = false;
    return isSameTree (root->left, root->right, &flag);
    
}
};
