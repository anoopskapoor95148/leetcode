class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,max= INT_MIN, sub_max=0;
        int numsSize = nums.size();
    
        for (i=0; i < numsSize; ++i) {
                sub_max +=nums[i];
                if (sub_max > max)
                        max = sub_max;
                if (sub_max < 0)
                        sub_max =0;
        }
        return max;
    
    }
};
