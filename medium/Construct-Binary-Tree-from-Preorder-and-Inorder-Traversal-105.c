/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int
search (int *inorder, int val, int left, int right)
{
    int i;
    for (i=left; i <=right; ++i)
        if (inorder[i] == val)
            return i;
    return -1;
}



struct TreeNode*
buildTree_int (int *index, int* preorder, int* inorder, int left, int right)
{
    int i;
    struct TreeNode *node;
    int search (int *inorder, int val, int left, int right);
    if (left > right)
        return NULL;
    node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    node->val = preorder[(*index)++];
    printf ("\n ANOOPPP node val %d  index value %d\n", node->val, index);
    if (left == right) {
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    i = search(inorder,node->val, left, right);
    node->left = buildTree_int (index, preorder, inorder,left, i-1);
    node->right = buildTree_int (index, preorder, inorder,  i+1, right);
    return node;
}

struct TreeNode* buildTree(int* preorder, int preorderSize, int* inorder, int inorderSize) {
    int left = 0, right = inorderSize-1;
    int index=0;
    if (preorderSize <=0)
        return NULL;
    printf ("\nleft %d right %d", left, right);
    return buildTree_int (&index, preorder, inorder, left, right);
    
}
