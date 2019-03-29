int lengthOfLIS(int* nums, int numsSize) {
         if (numsSize <= 0)
             return 0;
         int a[numsSize];
         int max=0, i,j, all_max=0;
      
         memset ((char *)a, 0, numsSize*sizeof(int));
    
         for (i=0; i < numsSize; ++i) {
             max = 0;
             for (j=0; j < i; ++j) {
                 if (nums[j] < nums[i]) {
                       if (max < a[j]) {
                           max = a[j];
                       }
                 }
             }
             a[i] = max+1;
             if (all_max < a[i])
                 all_max = a[i];
         }
         return all_max;
}
