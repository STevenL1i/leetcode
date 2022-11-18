def isPalindrome(head:list) -> bool:
    mid = len(head) / 2
    
    if len(head) % 2 == 0:
        a = head[:int(mid)]
        b = head[int(mid):]
    else:
        a = head[:int(mid)]
        b = head[int(mid)+1:]
    
    c = b.copy()
    c.reverse()
    
    if a == c:
        return True
    else:
        return False


print(isPalindrome([1,2,2,1]))
print(isPalindrome([1,2]))
print(isPalindrome([0,0]))
print(isPalindrome([1,2,3,2,1]))


# leetcode original question:
# using a different data struct to store the list
# original question & answer shown below

"""
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: Optional[ListNode]) -> bool:
        pd = []
        while True:
            if head != None:
                pd.append(head.val)
                head = head.next
            else:
                break
        
        mid = len(pd) / 2
        if len(pd) % 2 == 0:
            a = pd[:int(mid)]
            b = pd[int(mid):]
        else:
            a = pd[:int(mid)]
            b = pd[int(mid)+1:]
        
        c = b.copy()
        c.reverse()
        
        if a == c:
            return True
        else:
            return False
"""     