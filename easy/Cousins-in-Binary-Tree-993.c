/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void isCousins_int(struct TreeNode* root, int z, struct TreeNode **pz, struct TreeNode *p, int *levelx, int level) {
    if (!root)
        return;
    if (root->val == z) {
        *levelx = level;
        *pz = p;
        return;
    }
    isCousins_int (root->left, z, pz, root, levelx, (level+1));
    isCousins_int (root->right, z, pz, root, levelx, (level+1));
    return;
}
bool isCousins(struct TreeNode* root, int x, int y) {
    int level1=0, level2=0;
    struct TreeNode *p1=NULL, *p2= NULL;
    if (x == y || !root)
        return false;
    isCousins_int(root, x, &p1, NULL, &level1, 0);
    isCousins_int(root, y, &p2, NULL, &level2, 0);
    
    if (p1 != p2 && level1 == level2)
        return true;
    return false;
}
