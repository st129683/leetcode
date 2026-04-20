class Solution {
	bool isPowerOfThree(int n) {
		if (n <= 0) {
			return false;
		}
		int cnt = 1;
		while (cnt <= n) {
			if (cnt == n) {
				return true;
			}
			cnt *= 3;
		}
		return false;
	}
};
