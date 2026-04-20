class Solution {
public:
    bool hasAlternatingBits(int n) {
    	bool prev = n & 1;
    	bool curr = prev;
    	n >>= 1;
        while (n) {
        	curr = n & 1;
        	if (prev == curr) {
        		return false;
        	}
        	prev = curr;
        	n >>= 1;
        }
		return true;
    }
};
