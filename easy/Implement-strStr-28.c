bool check(char *haystack, char *needle, int *offset) {
    int i=0, j = 0;
    bool flag = false;
    
    while ((haystack[i] == needle[i]) && (needle[i] != '\0')) {
        if (flag == false) {
            ++j;
        }
        ++i;
        if (haystack[i] == needle[0]) {
            flag = true;
        }
    }
    *offset = j;
    if (needle[i] == '\0')
        return true;
    return false;
}


int strStr(char* haystack, char* needle) {
    int i=0;
    bool flag;
    int offset;
     if (haystack[0] == '\0' || needle[0] == '\0') {
                if (needle[0] == '\0') {
                    return 0;
                }
                if (haystack[0] == '\0') {
                    return -1;
                }
    }
    while ((haystack[i] != '\0') && (strlen(&haystack[i]) >= strlen(needle))) {
        offset = 1;
        if (haystack[i] == needle[0]) {
            offset = 0;
            flag = check (&haystack[i], needle, &offset);
            if (flag == true)
                return i;
            
        }
        i = i+offset;
    }
    return -1;
}




/*
int strStr(char* haystack, char* needle) {
            int i=0, j, k, l = -1;
    
            if (haystack[0] == '\0' || needle[0] == '\0') {
                if (needle[0] == '\0') {
                    return 0;
                }
                if (haystack[0] == '\0') {
                    return -1;
                }
                return 0;
            }
             while (haystack[i] != '\0') {
                  if (haystack[i] == needle[0]) {
                      j = 0;
                      k = i;
                      l = -1;
                      while (haystack[i] != '\0' && needle[j] != '\0') {
                        if (haystack[i] != needle[j]) {
                            break;
                        }
                        ++i;
                        ++j;
                        if (l == -1) {
                            if (haystack[i] == needle[0])
                                l = i;
                        }
                      }
                      // printf ("\n haystack index %d needle index %d\n",i, j);
                      if (needle[j] == '\0')
                          return k;
                  }
                  if (l != -1) {
                      i = l;
                      l == -1;
                  } else 
                     ++i;
             }
              printf ("\n ANOOP\n");
              return -1;
}
*/
