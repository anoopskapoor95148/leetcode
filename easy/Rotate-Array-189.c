void rotate(int* nums, int numsSize, int k) {
    void left_right(int left, int right,int* nums);
    int left, right;
    
    if (!k || !numsSize)
        return;
    k = k%numsSize;
    if (!k)
        return;
    left = 0;
    right = numsSize-k-1;
    left_right (left,right, nums);
    
    left = numsSize-k;
    right = numsSize-1;
    left_right (left,right, nums);
    
    left =0;
    right= numsSize-1;
    left_right (left,right, nums);
    return;
}
void left_right(int left, int right,int* nums) {
    int tmp;
    while (left < right) {
        tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        ++left;
        --right;
    }
}
