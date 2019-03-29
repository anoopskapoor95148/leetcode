`ccint
find_min (int a, int b) {
    
    if (!a || a >= b)
        return b;
    return a;
}

int numSquares(int n) {
    int buf[n+1];
    int i, j;
    
    memset ((char *)buf, 0, (n+1)*sizeof(int));
    
    for (i =1; i <=n; ++i) {
        for (j= 1; j*j <=i; ++j){
            if ((j*j) == i) {
                buf[i] = 1;
                break;
            }
            if (buf[i - j*j] != 0) {
                buf[i] = find_min(buf[i], (buf[i - j*j] +1));
            }
        }
    }
    return buf[n];
}

#if 0
class Solution {
    public int numSquares(int n) {
 
    int[] dp = new int[n+1];
    Arrays.fill(dp, Integer.MAX_VALUE);
 
    for(int i=1; i<=n; i++){
          for(int j=1; j*j<=i; j++){
            if(i==j*j){
                dp[i]=1;
            }else {
                dp[i]=Math.min(dp[i], dp[i-j*j] + 1);
            }
        }
    }
    return dp[n];
    }
}
#endif
