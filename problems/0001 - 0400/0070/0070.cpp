class Solution {
public:
    int climbStairs(int n) {
        if (n < 4) {
            return n;
        }
        int prev = 2, curr = 3;
        for (int i = 4; i <= n; ++i) {
            curr += prev;
            prev = curr - prev;
        }
        return curr;
    }
};
