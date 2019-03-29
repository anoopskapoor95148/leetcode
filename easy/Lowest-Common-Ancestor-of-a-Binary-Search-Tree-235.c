/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
// This is for Binary tree

// this is for BST tree

#if 0
void
lowestCommonAncestor_int(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q, struct TreeNode **parent) {
    if (!root)
        return;
    if (root->val == p->val || root->val == q->val) {
        *parent = root;
        return;
    }
    // go rigth side
    if (root->val < p->val) {
        lowestCommonAncestor_int (root->right, p,q, parent);
    }
    if (root->val > q->val) {
        lowestCommonAncestor_int (root->left, p,q, parent);
    }
    if (root->val > p->val && root->val < q->val) {
        *parent = root;
    }
    return;
}

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    struct TreeNode* parent = NULL;

    if (p == q)
        return p;
    if (!root)
        return NULL;
    if (p->val > q->val)
        lowestCommonAncestor_int (root, q, p, &parent);
    else
        lowestCommonAncestor_int (root, p, q, &parent);
    return parent;
}
 
#endif






struct TreeNode
*lowestCommonAncestor_int(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (root->val < p->val) {
        return lowestCommonAncestor_int (root->right, p, q);
    }
    if (root->val > q->val) {
        return lowestCommonAncestor_int (root->left, p, q);
    }
    return root;
}

struct TreeNode* lowestCommonAncestor(struct TreeNode* root, struct TreeNode* p, struct TreeNode* q) {
    if (p == q)
        return p;
    if (!root)
        return NULL;
    if (p->val > q->val)
        return lowestCommonAncestor_int (root, q, p);
    
    return lowestCommonAncestor_int (root, p, q);
}
    
