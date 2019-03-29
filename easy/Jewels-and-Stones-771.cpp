class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<int,bool> hash;
        int len, len1, i, count=0;;
        len  = J.size();
        len1 = S.size();
        
        if (!len || !len1)
            return 0;
        i = 0;
        
        while (i < len) {
            hash[J[i]] = true;
            ++i;
        }
        i = 0;
        while (i < len1) {
            if (hash[S[i]] == true) 
                ++count;
            ++i;
        }
        return count;
    }
};
