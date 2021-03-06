#
# @lc app=leetcode.cn id=1417 lang=python3
#
# [1417] 重新格式化字符串
#

# @lc code=start
class Solution:
    def reformat(self, s: str) -> str:
        numbers=[]
        letters=[]
        for i in s:
            if i.isalpha():
                letters.append(i)
            else:
                numbers.append(i)
        n,l=len(numbers),len(letters)
        if abs(n-l)>1:
            return ''
        res=[]
        if n>=l:
            while numbers:
                res.append(numbers.pop())
                if letters:
                    res.append(letters.pop())
        else:
            while letters:
                res.append(letters.pop())
                if numbers:
                    res.append(numbers.pop())
        return "".join(res)

# @lc code=end

