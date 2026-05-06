class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {
            int cnt = 0;
            int tmp = num;
            while (tmp) {
                cnt += tmp % 10;
                tmp /= 10;
            }
            num = cnt;
        }
        return num;
    }
};
