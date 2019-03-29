char* convertToTitle(int n) {
            if (n < 0)
                return NULL;
            char *a = (char *)malloc(64*sizeof(char));
            int j = 63;
     
            a[j] = '\0';
            while (n > 0) {
                --j;
                --n;
                a[j] = n%26 + 'A';
                n    = n /26;
            }
            return &a[j];
}
