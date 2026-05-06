class Solution {
public:
    int tribonacci(int n) {
        if (n < 2) {
            return n;
        }
        if (n == 2) {
            return 1;
        }
        int trib_left = 0;
        int trib_mid = 1;
        int trib_right = 1;
        for (int i = 3; i <= n; ++i) {
            int tmp = trib_left + trib_mid + trib_right;
            trib_left = trib_mid;
            trib_mid = trib_right;
            trib_right = tmp;
        }
        return trib_right;
    }
};
