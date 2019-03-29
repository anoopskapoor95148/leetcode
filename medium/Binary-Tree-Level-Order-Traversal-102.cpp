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
    vector <vector<int>> vp;
    queue<TreeNode*> sp;
    vector<vector<int>> levelOrder(TreeNode* root) {
        TreeNode *last_node, *p, *tmp= NULL;
        vector<int> v;
        if (!root)
            return vp;
        sp.push(root);
        last_node = root;
        while (!sp.empty()) {
            p = sp.front();
            v.push_back(p->val);
            sp.pop();
            if (p->left) {
                sp.push(p->left);
                tmp = p->left;
            }
                
            if (p->right) {
                sp.push(p->right);
                tmp = p->right;
            }
            if (p  == last_node) {
                last_node = tmp;
                tmp       = NULL;
                vp.push_back(v);
                v.clear();
            }
        }
        return vp;
    }
};
