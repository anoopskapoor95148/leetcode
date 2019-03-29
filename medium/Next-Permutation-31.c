void swap(int *a,int *b) 
{ 
    if( *a == *b ) 
        return; 
    *a^=*b; 
    *b^=*a; 
    *a^=*b; 
} 
void rev(int *nums,int l,int r) 
{ 
    while(l<r) 
        swap(&nums[l++],&nums[r--]); 
} 
  
int bsearch_1 (int *nums, int l,int r,int key)  { 
    int index = -1; 
    while(l<=r) 
    { 
        int mid = l+(r-l)/2; 
        if(nums[mid]<=key) 
            r=mid-1; 
        else
        { 
            l=mid+1; 
            if(index = -1 || nums[index]<=nums[mid]) 
                index = mid; 
        } 
    } 
    return index; 
} 
  
void nextPermutation(int* nums, int numsSize) { 
    if (numsSize <= 1)
        return;
    int len = numsSize, i=len-2,j, temp;
    while(i>=0 && nums[i]>=nums[i+1]) 
       --i; 
    
    if(i<0) {
        j = len-1;
        i=0;
        while (i < j) {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            ++i;
            --j;
        }
    }
    else
    { 
        int index=bsearch_1(nums,i+1,len-1,nums[i]); 
        swap(&nums[i],&nums[index]); 
        rev(nums,i+1,len-1); 
        return; 
    } 
} 
