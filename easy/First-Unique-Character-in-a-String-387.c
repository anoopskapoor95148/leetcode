int firstUniqChar(char* s) {
    int arr[512];
    int i, len=0;
    memset((char *)arr,0, 512*sizeof(int));
    
    while (s[len] != '\0') {
        ++arr[s[len]];
        ++len;
    }
    for (i=0; i < len; ++i) {
        if (arr[s[i]] == 1)
            return i;
    }
    return -1;
}
