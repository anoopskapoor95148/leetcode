bool
check_palindrome (char *s, int row, int col)
{
        while (row < col) {
            if (s[row] != s[col])
                return false;
            ++row;
            --col;
        }
        return true;
}

int countSubstrings(char* s) {
       int len=0, i,j, count=0, sub_len=0;
       while (s[len] != '\0')  {
           ++len;
           ++count;
       }
    
       if (len == 0)
           return 0;
        
        count = len;
        sub_len = 1;
        while(sub_len < len) {
            for (i=0, j=sub_len; j < len; ++i,++j) {
                 if (check_palindrome (s, i,j) == true) {
                    ++count;
                 }
            }
            ++sub_len;
        }
        return count;
}
        
