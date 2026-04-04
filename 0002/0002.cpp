struct ListNode {
	int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    	ListNode* dummy = new ListNode();
    	ListNode* curr = dummy;
    	int carry = 0;
    	while (l1 != nullptr || l2 != nullptr || carry) {
    		int tmp = carry;
			if (l1 != nullptr) {
				tmp += l1->val;
				l1 = l1->next;
			}
			if (l2 != nullptr) {
				tmp += l2->val;
				l2 = l2->next;
			}

    		curr->next = new ListNode(tmp % 10);
			curr = curr->next;
    		carry = tmp / 10;
    	}

		return dummy->next;
    }
};


int main() {
	ListNode* a1 = new ListNode(3);
	ListNode* a2 = new ListNode(4, a1);
	ListNode* a3 = new ListNode(2, a2);

	ListNode* b1 = new ListNode(4);
	ListNode* b2 = new ListNode(6, b1);
	ListNode* b3 = new ListNode(5, b2);

	Solution s;
	ListNode* ans = s.addTwoNumbers(a3, b3);
	while (ans) {
		std::cout << ans->val << std::endl;
		ans = ans->next;
	}

	return 0;
}
