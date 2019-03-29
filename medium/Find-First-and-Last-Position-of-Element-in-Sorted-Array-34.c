/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int
find_left_index (int* nums, int left, int right, int target) {
      int new_index = -1;
      int mid;
       
      while (left <= right) {
        mid = (left+right)/2;
        if (nums[mid] == target) {
            new_index = mid;
            right = mid-1;
        } else {
                left = mid+1;    
        }
     }
    return new_index;
}
int
find_right_index (int* nums, int left, int right, int target) {
      int new_index = -1;
      int mid;
       
      while (left <= right) {
        mid = (left+right)/2;
        if (nums[mid] == target) {
            new_index = mid;
            left = mid+1;
        } else {
                right = mid-1;    
        }
     }
    return new_index;
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
            int *index = (int *)malloc(2*sizeof(int));
            int left, mid, right;
            int left_index, right_index;
    
            index[0] = -1;
            index[1] = -1;
            left  = 0;
            right = numsSize-1;
            *returnSize =2;
    
            while (left <= right) {
                mid = (left+right)/2;
                if (nums[mid] == target) {
                    left_index  = find_left_index(nums, left, mid-1, target);
                    right_index = find_right_index (nums, mid+1, right, target);
                    if (left_index == -1 && right_index == -1) {
                        index[0] = index[1] = mid;
                    } else {
                        if (left_index == -1) {
                            index[0] = mid;
                            index[1] = right_index;
                         } else {
                            if (right_index == -1) {
                                index[1] = mid;
                                index[0] = left_index;
                            } else {
                                index[0] = left_index;
                                index[1] = right_index;
                            }
                        }
                    }    
                    break;
                }
                if (nums[mid] > target)
                    right = mid -1;
                else
                    left = mid+1;
            }
            return index;
}
