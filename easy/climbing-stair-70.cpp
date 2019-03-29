class Solution {
public:
    int climbStairs(int n) {
        int n1, n2,n3, i;
        if (n == 1) {
            return 1;
        }
        if (n == 2) {
            return 2;
        }
        n1 = 1;
        n2 = 2;
        for (i =3; i <=n; ++i) {
            n3  = n1 +n2;
            n1  = n2;
            n2  = n3;
        }
        return n3;
    }
};
