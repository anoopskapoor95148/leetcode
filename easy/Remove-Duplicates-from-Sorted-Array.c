int removeDuplicates(int* nums, int numsSize) {
    int i=0,j;
    if (!numsSize)
        return 0;
    for (j =1; j <  numsSize; ++j) {
        if (nums[i] == nums[j]) {
            continue;
        }
        ++i;
        if (i != j)
            nums[i] = nums[j];
    }
    return i+1;
}
