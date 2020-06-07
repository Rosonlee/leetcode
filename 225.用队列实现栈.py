#
# @lc app=leetcode.cn id=225 lang=python
#
# [225] 用队列实现栈
#

# @lc code=start
class MyStack(object):

    def __init__(self):
        """
        Initialize your data structure here.
        """
        self.q = []


    def push(self, x):
        """
        Push element x onto stack.
        :type x: int
        :rtype: None
        """
        self.q.append(x)
        q_length = len(self.q)
        while q_length > 1:
            self.q.append(self.q.pop(0))
            q_length -= 1


    def pop(self):
        """
        Removes the element on top of the stack and returns that element.
        :rtype: int
        """
        return self.q.pop(0)



    def top(self):
        """
        Get the top element.
        :rtype: int
        """
        return self.q[0]


    def empty(self):
        """
        Returns whether the stack is empty.
        :rtype: bool
        """
        return not bool(self.q)



# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()
# @lc code=end

