class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
        	return false;
        }
        int n = x;
        int rev = 0;
        while (n) {
        	rev = 10 * rev + (n % 10);
        	n /= 10;
        }
        return x == rev;
    }
};
