class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        result.reserve(nums.size());
        for (int i = 0; i < (1 << nums.size()); i++) {
            int n = i;
            int j = 0;
            vector<int> subset;
            while (n > 0) {
                if (n & 1) {
                    subset.push_back(nums[j]);
                }
                n >>= 1;
                ++j;
            }
            result.push_back(subset);
        }
        return result;
    }
};
