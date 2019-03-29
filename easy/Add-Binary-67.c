char* addBinary(char* a, char* b) {
        int i =0, j=0, len, carry;
         char *c;
        while (a[i] != '\0') {
            ++i;
        }
        while (b[j] != '\0') {
            ++j;
        }
        len =(i>j)?i:j;
        len = len+2;
        c = (char *)malloc((len)*sizeof(char));
        memset((char *)c,  '0', (len)*sizeof(char));
        
        carry =0;
         --len;
         c[len] = '\0';
         --i;
         --j;
        while (i >=0 || j >=0 || carry) {
                --len;
                carry+= (i>=0)?(a[i]-'0'):0;
                carry+= (j>=0)?(b[j]-'0'):0;
                c[len] = (carry%2) +'0';
                carry  = carry/2;
                --i;
                --j;
        }
        return &c[len];
}
