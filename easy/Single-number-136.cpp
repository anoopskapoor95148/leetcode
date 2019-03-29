class Solution {
public:
    int singleNumber(vector<int>& nums) {
    int tmp = 0,i;
    int numsSize = nums.size();
    if (numsSize <=0)
        return 0;
    for (i=0; i <numsSize; ++i) {
        tmp ^=nums[i];
    }
    return tmp;
}
};
