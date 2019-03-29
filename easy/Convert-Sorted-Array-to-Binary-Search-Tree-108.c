/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* sortedArrayToBST_int(int nums[], int left, int right) {
    int mid;
    struct TreeNode *nodep;
    if (left > right)  {
        return NULL;
    }
    mid = (left+right)/2;
    nodep = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    nodep->val = nums[mid];
    
    nodep->left = sortedArrayToBST_int(nums, left, mid-1);
    nodep->right = sortedArrayToBST_int(nums, mid+1, right);
    return nodep;
}
void
print_tree (struct TreeNode* root) {
    if (!root)
        return;
    print_tree (root->left);
    printf ("  %d ", root->val);
    print_tree(root->right);
    return;
}
struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
        struct TreeNode* root;
        int i=0;
        if (numsSize <= 0)
            return NULL;
    
        root = sortedArrayToBST_int (nums, 0, numsSize-1);   
        return root;
}
