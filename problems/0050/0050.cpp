#include <climits>


class Solution {
public:
    double myPow(double x, int n) {
        if (n == 1 || x == 0.0 || x == 1.0) {
            return x;
        }
        else if (n == 0) {
            return 1.0;
        }
        else if (n == INT_MIN) {
            return 1.0 / (myPow(x, INT_MAX) *  x);
        }
        else if (n < 0) {
            return 1.0 / myPow(x, -n);
        }
        else {
            double half = myPow(x, n / 2);
            if (n % 2) {
                return half * half * x;
            }
            else {
                return half * half;
            }
        }
    }
};