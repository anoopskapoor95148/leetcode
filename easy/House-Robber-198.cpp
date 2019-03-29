class Solution {
public:
    int rob(vector<int>& nums) {
    int i, value1, value2, value;
    int numsSize = nums.size();
    if (numsSize <=0)
        return 0;
    if (numsSize == 1)
        return nums[0];
    if (numsSize == 2)
        return (nums[1] > nums[0]?nums[1]:nums[0]);
    value1 = nums[0];
    value2 = nums[1];
    for (i=2; i < numsSize; ++i) {
        if ((value1 + nums[i]) > value2) {
             value = value1 + nums[i];
        } else
            value = value2;
        if (value1 < value2)
            value1 = value2;
        value2 = value;
    }
    return value;
}
    
    
    
};
