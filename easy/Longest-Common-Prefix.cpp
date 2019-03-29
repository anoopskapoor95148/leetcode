// http://www.cnblogs.com/grandyang/p/4606926.html
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        for (int j = 0; j < strs[0].size(); ++j) {
            for (int i = 0; i < strs.size(); ++i) {
                if (j >= strs[i].size() || strs[i][j] != strs[0][j]) {
                    return strs[0].substr(0, j);
                }
            }
        }
        return strs[0];
    }
};
