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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head)return NULL;
        ListNode * temp=head;
        int count = 1;
        ListNode * leftn=NULL;
        ListNode * leftprev = NULL;
        ListNode * rightn = NULL;
        ListNode * rightnext = NULL;

        while(temp){
             if(count == left-1){
                leftprev=temp;
            }
            if(count == left){
                leftn=temp;
            }
            if(count == right){
                rightn=temp;
                rightnext=temp->next;
            }
            count++;
            temp=temp->next;
        }
        temp=leftn;
        stack<ListNode*> st;

        while(temp != rightn){
            st.push(temp);
            temp=temp->next;
        }
        st.push(rightn);

        ListNode* newhead=st.top();
         temp=st.top();
        st.pop();

        while(st.size()){
            temp->next=st.top();
            temp=temp->next;
            st.pop();
        }

        temp->next=rightnext;

        if(leftprev)
        leftprev->next=newhead;
        else head=newhead;

        return head;

    }
};