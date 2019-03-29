// Not optimum need to rework

int findDuplicate(int* nums, int numsSize) {
     int i, j;
    
     for (i=0; i < numsSize-1; ++i) {
         for (j = i+1; j < numsSize; ++j) {
             if (nums[i] == nums[j])
                 return nums[i];
         }
     }
     return -1;
}
