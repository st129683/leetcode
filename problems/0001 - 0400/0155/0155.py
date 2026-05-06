class MinStack:
    def __init__(self):
        self.stack_ = []
        self.min_stack_ = []

    def push(self, val: int) -> None:
        if not self.stack_:
            self.stack_.append(val)
            self.min_stack_.append(val)
        else:
            self.stack_.append(val)
            self.min_stack_.append(min(self.min_stack_[-1], val))

    def pop(self) -> None:
        self.stack_.pop()
        self.min_stack_.pop()

    def top(self) -> int:
        return self.stack_[-1]

    def getMin(self) -> int:
        return self.min_stack_[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()
