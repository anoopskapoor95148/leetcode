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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> g1;
        vector<int> g2;
        leafSimilar_build(root1, g1);
        leafSimilar_build(root2, g2);
        if (g1.size() != g2.size()) {
            return false;
        }
        for (auto i = g1.begin(), j = g2.begin(); i != g1.end(); ++i, ++j) {
            if (*i != *j) {
                return false;
            }
        }
        return true;  
    }
    void leafSimilar_build(TreeNode* root, vector<int> &g) {
        if (!root)
            return;
        leafSimilar_build(root->left, g);
        leafSimilar_build(root->right, g);
        if (!root->left && !root->right)
            g.push_back(root->val);
        return;
    }
};
