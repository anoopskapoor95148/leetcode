class Solution {
    int min=0;
    int count = 0;
    vector<int> vp;
public:
    int findKthLargest(vector<int>& nums, int k) {
        if (nums.size() <= 0)
            return -1;
        for (auto itr = nums.begin(); itr != nums.end(); ++itr) {
            ++count;
            if (count <= k) {
                vp.push_back(*itr);
             } else {
                if (*itr > vp[min]) {
                    vp.push_back(*itr);
                    vp.erase(vp.begin()+min);
                }
             }
             min = find_min_index();
          }
          return vp[min];
    }
    int find_min_index () {
        int min=0, i=0;
        for (auto itr = vp.begin(); itr != vp.end(); ++itr) {
            if (vp[min] > *itr)
                min = i;
            ++i;
        }
        return min;
    }
};
