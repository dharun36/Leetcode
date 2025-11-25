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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * temp = head;
        ListNode * prev = NULL;

        while(temp){
            int f=1;
            if(temp->val==val){
                if(prev) prev->next=temp->next;
                else head=temp->next;
                f=0;

            }
            if(f)
            prev = temp;
            
            temp=temp->next;
        }

        return head;
    }
};