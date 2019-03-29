#if 0
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> hash;
        int n = nums.size();
        for (auto itr = nums.begin(); itr != nums.end(); ++itr) {
            ++hash[*itr];
            if (hash[*itr] > n/2)
                return (*itr);
        }
        return 0;
    }
};
#endif

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = 0, cnt = 0;
        for (int num : nums) {
            if (cnt == 0) {res = num; ++cnt;}
            else (num == res) ? ++cnt : --cnt;
        }
        return res;
    }
};
