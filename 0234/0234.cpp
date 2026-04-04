struct ListNode {
	int val;
	ListNode* next;
};

using namespace std;

class Solution {
	public:
		bool isPalindrome(ListNode* head) {
			ListNode* curr = head;
			int size = 0;
			while (curr) {
				++size;
				curr = curr->next;
			}
			ListNode* prev = nullptr;
			ListNode* nxt = nullptr;
			curr = head;
			ListNode* tail = nullptr;
			int sizecopy = size;
			if (size % 2 == 0) {
				
			}
		}
}
