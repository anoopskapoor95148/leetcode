/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
void
pathSum_int (struct TreeNode* root, int sum, int *count, 
                                        int *stack, int level) {
    int i, tmp=0;
    if (!root)
        return;
    stack[level] = root->val;
    
    for (i=level; i >= 0; --i) {
        tmp +=stack[i];
        
        if (tmp == sum) {
            ++(*count);
        }
    }
    pathSum_int (root->left, sum, count, stack, (level +1));
    pathSum_int (root->right, sum, count, stack, (level +1));    
}
int pathSum(struct TreeNode* root, int sum) {
    int count=0;
    int stack[1000];
    pathSum_int(root, sum, &count, stack, 0);
    return count;
    
}
