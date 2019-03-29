int missingNumber(int* nums, int numsSize) {
        int i, sum=0, sum1;
        for (i=0; i < numsSize; ++i)
               sum +=nums[i];
        sum1 = (numsSize*(numsSize +1))/2;
        return sum1 -sum;
}
