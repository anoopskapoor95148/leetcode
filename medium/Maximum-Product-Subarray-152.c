int maxProduct(int* nums, int numsSize) {
    int max= -2147483648;
    int sub_max =1,i, j;
    
    for (i=0; i < numsSize; ++i) {
         sub_max = 1;
         for (j=i; j < numsSize; ++j) {
                sub_max = sub_max*nums[j];
                if (max < sub_max)
                     max = sub_max;
         }
     }
     return max;
}

#if 0

// Utility functions to get minimum of two integers 
int min (int x, int y) {return x < y? x : y; } 
  
// Utility functions to get maximum of two integers 
int max (int x, int y) {return x > y? x : y; } 
  
/* Returns the product of max product subarray.  
   Assumes that the given array always has a subarray 
   with product more than 1 */
int maxProduct (int* nums, int numsSize) {
{ 
    // max positive product ending at the current position 
    int max_ending_here = 1; 
  
    // min negative product ending at the current position 
    int min_ending_here = 1; 
  
    // Initialize overall max product 
    int max_so_far = 1; 
  
    /* Traverse through the array. Following values are 
       maintained after the i'th iteration: 
       max_ending_here is always 1 or some positive product 
                       ending with arr[i] 
       min_ending_here is always 1 or some negative product  
                       ending with arr[i] */
    for (int i = 0; i < numsSize; i++) 
    { 
        /* If this element is positive, update max_ending_here.  
           Update min_ending_here only if min_ending_here is  
           negative */
        if (nums[i] > 0) 
        { 
            max_ending_here = max_ending_here*nums[i]; 
            min_ending_here = min (min_ending_here * nums[i], 1); 
        } 
  
        /* If this element is 0, then the maximum product  
           cannot end here, make both max_ending_here and  
           min_ending_here 0 
           Assumption: Output is alway greater than or equal  
                       to 1. */
        else if (nums[i] == 0) 
        { 
            max_ending_here = 1; 
            min_ending_here = 1; 
        } 
  
        /* If element is negative. This is tricky 
           max_ending_here can either be 1 or positive.  
           min_ending_here can either be 1 or negative. 
           next min_ending_here will always be prev.  
           max_ending_here * arr[i] next max_ending_here 
           will be 1 if prev min_ending_here is 1, otherwise  
           next max_ending_here will be prev min_ending_here * 
           arr[i] */
        else
        { 
            int temp = max_ending_here; 
            max_ending_here = max (min_ending_here * nums[i], 1); 
            min_ending_here = temp * nums[i]; 
        } 
  
        // update max_so_far, if needed 
        if (max_so_far <  max_ending_here) 
          max_so_far  =  max_ending_here; 
    } 
  
    return max_so_far; 
} 
#endif // 0
