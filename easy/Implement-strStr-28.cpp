class Solution {
public:
    int strStr(string haystack, string needle) {
        int len, len1, i, j;
        len  = haystack.size();
        len1 = needle.size();
        
        
        if (!len || !len1 || (len < len1)) {
            if (len == len1 || !len1)
                return 0;
            return -1;
        }
        for (i=0; i < len -len1 +1; ++i) {
            j = 0;
            if (haystack[i] == needle[0]) {
                printf ("\n i value %d\n",i);
                for (;j < len1; ++j) {
                    if (haystack[i+j] != needle[j])
                        break;
                }
            }
            if (j == len1)
                    return i;
        }
        return -1;
    }
};
