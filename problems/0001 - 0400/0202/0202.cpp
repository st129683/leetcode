class Solution {
public:
    bool isHappy(int n) {

        while (n > 9) {
            int cnt = 0;
            int tmp = n;
            while (tmp) {
                cnt += (tmp % 10) * (tmp % 10);
                tmp /= 10;
            }
            n = cnt;
        }

        if (n == 1 || n == 7) {
            return true;
        }

        return false;

    }
};
