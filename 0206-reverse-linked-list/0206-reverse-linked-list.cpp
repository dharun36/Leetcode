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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)return NULL;
        stack<ListNode*> st;
        ListNode* temp = head;
        while(temp){
            st.push(temp);
            temp=temp->next;
        }
        ListNode * newhead=st.top();
        ListNode * tail=st.top();
        st.pop();

        while(st.size()){
            tail->next=st.top();
            tail=st.top();
            st.pop();
        }

        tail->next=NULL;

        return newhead;

    }
};