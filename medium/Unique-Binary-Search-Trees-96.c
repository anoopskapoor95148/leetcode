#if 0 
// Need to rework
// recursion method
int numTrees_int(int *a, int n, int cur, int min, int max)
{
    int i;
    int count=0;
    a[cur] = true;
    for (i=1; i <= n; ++i) {
        if (a[i] == true)
            continue;
        if (cur > i) {
            count += numTrees_int (a, n, i, min, cur);
        } else {
            count += numTrees_int (a, n, i, cur, max);
        }
    }
    a[cur] = false;
    if (count == 0)
       count =1;
    return count;
}


int numTrees(int n) {
    bool a[n+1];
    int x;
    int count = 0;
    int min= 0, max = n+1;
    int i;
    for (i=1; i <= n; ++i)
        a[i] = false;
    for (i=1; i <= n; ++i) {
        x = numTrees_int (a,n,i, min, max);
        printf ("\n i %d x %d \n", i, x);
        count += x;
    }
    return count;
}
#endif
// Dynamic programming
int numTrees(int n) {
    int a[n+1];
    int i, j;
    if (n <= 0)
        return 0;
    if (n <=1)
        return 1;
    for (i=0; i <=n; ++i)
        a[i] = 0;
    
    a[0] = 1;
    a[1] = 1;
    
    for (i = 2; i <=n; ++i) {
        for (j =0; j < i; ++j) {
            a[i] += a[j]*a[i-j-1];
        }
    }
    return a[n];
}

