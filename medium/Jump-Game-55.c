int min(int x, int y) { return (x < y)? x: y; } 
  
// Returns minimum number of jumps to reach arr[n-1] from arr[0] 
bool canJump(int* nums, int numsSize) {
    if (numsSize ==1 && nums[0] == 0) 
        return true;
    if (nums[0] == 0)
        return false;
    int jumps[numsSize];  // jumps[n-1] will hold the result 
    int i, j; 

    jumps[0] = 0; 
  
    // Find the minimum number of jumps to reach arr[i] 
    // from arr[0], and assign this value to jumps[i] 
    for (i = 1; i < numsSize; i++) 
    { 
        jumps[i] = INT_MAX; 
        for (j = 0; j < i; j++) 
        { 
            if (i <= j + nums[j] && jumps[j] != INT_MAX)
            { 
                 jumps[i] = min(jumps[i], jumps[j] + 1); 
                 break; 
            } 
        } 
    }
    if (jumps[numsSize-1] != INT_MAX)
        return true;
    return false;
} 
