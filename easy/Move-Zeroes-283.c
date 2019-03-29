void moveZeroes(int* nums, int numsSize) {
    int count=0, i, index=0;
    for (i=0; i <numsSize; ++i) {
        if (nums[i] == 0) {
            continue;
        }
        if (index != i) {
            nums[index] = nums[i];
        }
        ++index;
    }
    for (i=index; i < numsSize; ++i)
        nums[i] = 0;
    return;
}
