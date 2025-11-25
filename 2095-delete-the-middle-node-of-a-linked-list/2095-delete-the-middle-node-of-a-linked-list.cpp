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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode * fast = head;
        ListNode * slow = head;

        if(head->next==NULL){
            head=NULL;
        }
        else{

        while(fast && fast ->next){
            fast=fast->next->next;
            slow=slow->next;
        }

        ListNode *nextNode = slow->next;
        if(nextNode){
        slow->val=nextNode->val;
        slow->next = nextNode->next;
        delete nextNode;
        }
        else{
            head->next=NULL;
        }
        }
        return head;
    }
};