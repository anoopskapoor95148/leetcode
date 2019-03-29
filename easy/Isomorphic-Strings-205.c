int hash[512];
int hash1[512];

bool isIsomorphic(char* s, char* t) {
    int i=0;
    if (strlen(s) != strlen(t))
        return false;
   for (i=0; i < 512; ++i) {
       hash[i]  = -1;
       hash1[i] = -1;
   }
    i=0;
    while (s[i] != '\0' && t[i] != '\0') {
        printf ("Hey\n");
        if ((hash[s[i]] == -1) && (hash1[t[i]] == -1)) {
            hash[s[i]]  = t[i];
            hash1[t[i]] = s[i];
            
            printf ("\n %d  %d \n", s[i], hash[s[i]]);
        } else {
            if (hash[s[i]] != t[i])
                return false;
        }
        ++i;
    }
    return true;
}



/*
typedef struct hash_
{
    int mapping_index;
} hash_t;
hash_t hash[512];
hash_t hash1[512];

bool isIsomorphic(char* s, char* t) {
    int i=0;
    if (strlen(s) != strlen(t))
        return false;
   for (i=0; i < 512; ++i) {
       hash[i].mapping_index = 0;
       hash1[i].mapping_index = 0;
   }
    i=0;
    while (s[i] != '\0' && t[i] != '\0') {
        printf ("Hey\n");
        if ((hash[s[i]].mapping_index == 0) && (hash1[t[i]].mapping_index == 0)) {
            hash[s[i]].mapping_index = t[i];
            hash1[t[i]].mapping_index = s[i];
            
            printf ("\n %d  %d \n", s[i], hash[s[i]].mapping_index);
        } else {
            if (hash[s[i]].mapping_index != t[i])
                return false;
        }
        ++i;
    }
    return true;
}
*/
