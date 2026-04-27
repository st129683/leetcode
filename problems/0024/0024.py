class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


class Solution:
    def swapPairs(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None or head.next == None:
            return head
        head.val, head.next.val = head.next.val, head.val
        self.swapPairs(head=head.next.next)
        return head
