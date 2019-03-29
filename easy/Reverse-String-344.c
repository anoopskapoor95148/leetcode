void reverseString(char* s, int sSize) {
    int i=0,j;
    char tmp;
    j = sSize-1;
    while (i < j) {
        tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
        ++i;
        --j;
    }
    return;
}
