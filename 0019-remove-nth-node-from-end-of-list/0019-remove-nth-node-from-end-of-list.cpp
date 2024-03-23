/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode *dummyHead = new ListNode();
        dummyHead->next = head;
        ListNode* left = dummyHead;
        ListNode* right = head;
        while(n > 0 && right != nullptr){
            right = right->next;
            n--;
        }
        
        while(right != nullptr){
            left = left->next;
            right = right->next;
        }
        
        left->next = left->next->next;
        
        return dummyHead->next;
    }
};