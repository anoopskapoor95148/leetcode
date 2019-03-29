int findUnsortedSubarray(int* nums, int numsSize) {
    int i, j= -1, left_index=-1, right_index = -1;
    int min,max;
   
    
    for (i=0; i < numsSize-1; ++i) {
        if (nums[i] > nums[i+1]) {
            left_index = i;
            break;
        }
    }
    if (left_index == -1)
        return 0;
    for (i=numsSize-1; i > 0; --i) {
        if (nums[i] < nums[i-1]) {
            right_index = i;
            break;
        }
    }
    min = max = nums[left_index];
    for (i=left_index+1; i <= right_index; ++i) {
        if (min > nums[i])
            min = nums[i];
        if (max < nums[i])
            max = nums[i];
   }
   for (i = 0; i < left_index; ++i) {
       if (min < nums[i]) {
           left_index = i;
           break;
       }
   }

  for (i=numsSize-1; i >= right_index+1; --i) {
       if (max > nums[i]) {
           right_index = i;
           break;
       }
    }
    return (right_index - left_index +1);
}
