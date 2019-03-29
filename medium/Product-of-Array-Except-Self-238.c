/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
               int i, sum=1;
                *returnSize =numsSize ;
                if (numsSize == 0) {
                    return NULL;
                }
               int *p = (int *)malloc(numsSize*sizeof(int));
                p[0] = 1;
                for(i=1; i < numsSize; ++i) {
                    p[i] = p[i-1]*nums[i-1];
                }         
                for(i=numsSize-1; i >=0; --i) {
                    p[i] = p[i]*sum;
                    sum  = sum*nums[i];
                }
                return p;
}  
