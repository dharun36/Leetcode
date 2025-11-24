/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode* fast = head;
    struct ListNode* slow = head;

    if(!fast || !fast->next)return NULL;

    // while(fast && fast->next){
    do{
        slow=slow->next;
        fast=fast->next->next;
    }while(fast!=slow && fast && fast->next);

    // No Loop Condition
    if(fast==NULL || fast->next == NULL)return NULL;


    slow=head;
    
    while(fast!=slow){
        slow=slow->next;
        fast=fast->next;

    }
    return slow;


}