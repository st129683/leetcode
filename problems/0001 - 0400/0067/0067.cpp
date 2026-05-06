#include <string>

using namespace std;


class Solution {
public:
    string addBinary(string a, string b) {
        string res;
		if (a.size() < b.size()) {
			swap(a, b);
		}
		bool carry = false;
		for (size_t i = 0; i < b.size(); ++i) {
			bool bit_a = a[a.size() - i - 1] == '1';
			bool bit_b = b[b.size() - i - 1] == '1';

			res += (carry ^ bit_a ^ bit_b) ? '1' : '0';
			carry = (bit_a && bit_b) || (bit_a && carry) || (bit_b && carry);
		}

		for (size_t i = b.size(); i < a.size(); ++i) {
			bool bit_a = a[a.size() - i - 1] == '1';

			res += (carry ^ bit_a) ? '1' : '0';
			carry = bit_a && carry;
		}
		if (carry) res += '1';

		return string (res.rbegin(), res.rend());
    }
};
