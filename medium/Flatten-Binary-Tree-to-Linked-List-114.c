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
    TreeNode  *head = NULL, *tail = NULL;
    void flatten(TreeNode* root) {
        flatten_int(root);
       if (tail)
         tail->right = NULL;
        return;
    }
    void flatten_int(TreeNode* root) {
        TreeNode *p, *q;
        if (!root)
            return;
        p = root->left;
        q = root->right;
        if (!head) {
            head = tail = root;
        } else {
            tail->right = root;
            tail = tail->right;
        }
        
        flatten (p);
        flatten(q);
        root->left = NULL;
    }
};
