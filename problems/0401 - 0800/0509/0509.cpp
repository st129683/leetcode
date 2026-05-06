class Solution {
public:
    int fib(int n) {
        if (n == 0 || n == 1) {
            return n;
        }
        int fib_prev = 0;
        int fib_curr = 1;
        for (int i = 2; i <= n; ++i) {
            fib_curr += fib_prev;
            fib_prev = fib_curr - fib_prev;
        }
        return fib_curr;
    }
};
