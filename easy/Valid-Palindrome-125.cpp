class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1 ;
        while (left < right) {
            if (!isalnum(s[left])) ++left;
            else if (!isalnum(s[right])) --right;
            //else if ((s[left] + 32 - 'a') %32 != (s[right] + 32 - 'a') % 32) return false;
            else if (tolower(s[left]) != tolower(s[right])) return false;
            else {
                ++left; --right;
            }
        }
        return true;
    }
};
