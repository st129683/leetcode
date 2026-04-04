struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr)
        	return nullptr;
        ListNode* currA = headA;
        ListNode* currB = headB;
        while (currA != currB) {
        	currA = currA->next;
        	currB = currB->next;
        	if (currA == currB)
        		return currA;
        	if (currA == nullptr)
        		currA = headB;
        	if (currB == nullptr)
        		currB = headA;
        }
        return currA;
    }
};
