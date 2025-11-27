/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseList(ListNode head,ListNode end) {
        ListNode prev = end;
        ListNode curr = head;
        ListNode temp;

        while(curr!=end){
            temp = curr.next;
            curr.next=prev;
            prev=curr;
            curr=temp;
        }

        return prev;
    }

    public ListNode reverseBetween(ListNode head, int left, int right) {

        if(head==null)return null;
        ListNode leftnode=null;
        ListNode leftprev=null;
        ListNode rightnode=null;
        ListNode rightnext=null;

        ListNode temp = head;

        int i = 1;

        while(temp!=null){
            if(i == left-1){
                leftprev = temp;
            }
            if(i == left){
                leftnode = temp;
            }

            if(i == right){
                rightnode = temp;
                rightnext = temp.next;
                break;
            }
            i++;
            temp = temp.next;
        }

        ListNode mhead = reverseList(leftnode,rightnext);
        if(leftprev==null)head = mhead;
        else leftprev.next = mhead;

        leftnode.next=rightnext;
        return head;

    }
}