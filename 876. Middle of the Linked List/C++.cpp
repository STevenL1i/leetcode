#include <iostream>
#include <vector>
using namespace std;

// this is not part of leetcode solution
// only for initialize linked list function

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode* vecToListNode(vector<int> input)
{
    ListNode* head = new ListNode();
    ListNode* root;
    root = head;
    for(int i=0; i < input.size()-1; i++) {
        ListNode* next = new ListNode(input[i+1]);
        root->val = input[i];
        root->next = next;
        root = next;
    }
    return head;
}

void display(ListNode* root)
{
    while (root != NULL) {
        cout << root->val << " ";
        root = root->next;
    }
    cout << endl;
}

// END linked list initialized function


ListNode* middleNode(ListNode* head)
{
    ListNode* srchNode = head;
    ListNode* middleNode = head;
    while (srchNode != NULL && srchNode->next != NULL) {
        srchNode = srchNode->next->next;
        middleNode = middleNode->next;
    }
    return middleNode;
}


int main()
{
    vector<int> input = {1,2,3,4,5,6};
    ListNode* head = vecToListNode(input);
    display(middleNode(head));
}
