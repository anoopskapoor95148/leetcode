class Solution {
public:
    int reverse(int x) {
        int res = 0;
        printf ("\n max %d\n", (INT_MIN & 0x00000000));
        while (x != 0) {
            if (abs(res) > INT_MAX / 10) return 0;
            res = res * 10 + x % 10;
            x /= 10;
        }
        return res;
    }
};
