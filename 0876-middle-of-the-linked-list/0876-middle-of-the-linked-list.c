/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) {
        struct ListNode *temp=head;
        int count=0;
        while(temp){
            count++;
            temp=temp->next;
        }
        count=count/2;
        temp=head;

        while(temp && count>0){
            temp=temp->next;
            count--;
        }
        return temp;
}