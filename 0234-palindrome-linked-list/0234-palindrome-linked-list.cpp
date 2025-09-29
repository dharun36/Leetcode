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
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode* temp = head;
        while(temp!=NULL){
            s.push(temp ->val);
            temp = temp -> next;
        }

        temp = head;

        while(temp){
            if(s.top() != temp->val) return false;
            s.pop();
            temp=temp->next;
        }
        
        // int j = arr.size()-1;
        // int i = 0;
        // while(i<j){
        //     if(arr[i]!=arr[j])return false;
        //     i++;
        //     j--;
        // }
        return true;
    }
};