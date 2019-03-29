int lengthOfLongestSubstring(char* s) {
    int len=0,i=0;
    int tmp[512];
    int left_index, tmp_len=0, max_len=0;
    memset ((char *)tmp, -1, 512*sizeof(int));
    
    while (s[len] != '\0')
        ++len;
    if (len == 0)
        return 0;
    left_index = 0;
    max_len = 1;
    tmp[s[0]] = 0;
    for (i=1; i < len; ++i) {
         if (tmp[s[i]] < left_index) {
             tmp[s[i]] = i;
             continue;
         }
         tmp_len = i- left_index;
         left_index = tmp[s[i]]+1;
         tmp[s[i]]  = i;
         if (max_len < tmp_len)
             max_len = tmp_len;
    }
    tmp_len = i- left_index;;
    if (max_len < tmp_len)
             max_len = tmp_len;
    return max_len;   
}
