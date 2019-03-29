void sortColors(int* nums, int numsSize) {
    int left, right, tmp;
    
    left =0;
    right = numsSize-1;

    while (left < right) {
        if (nums[right] == 2) {
            --right;
            continue;
        }
        if (nums[left] != 2) {
            ++left;
            continue;
        }
        tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        ++left;
        --right;
    }
    left = 0;
    if (right >=0) {
        if (nums[right] == 2)
            --right;
    }
    while (left < right) {
           if (nums[right] == 1) {
            --right;
            continue;
        }
        if (nums[left] != 1) {
            ++left;
            continue;
        }
        tmp = nums[left];
        nums[left] = nums[right];
        nums[right] = tmp;
        ++left;
        --right;
    }
    return;
}
