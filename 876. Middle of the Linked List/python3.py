class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


def middleNode(head:ListNode) -> list:
    srchNode = head
    midNode = head
    while True:
        if srchNode != None and srchNode.next != None:
            srchNode = srchNode.next.next
            midNode = midNode.next
        else:
            break
        
    output = []
    while True:
        if midNode != None:
            output.append(midNode.val)
            midNode = midNode.next
        else:
            break
    
    return output




head = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5, ListNode(6))))))
print(middleNode(head))
head = ListNode(1, ListNode(2, ListNode(3, ListNode(4, ListNode(5)))))
print(middleNode(head))