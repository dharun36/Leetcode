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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode temp=head;
        ListNode sec = head;
        ListNode prev=null;
        while(n>0 ){
            temp=temp.next;
            n--;
        }

        while(temp !=null){
            prev=sec;
            temp=temp.next;
            sec = sec.next;
        }

        if(prev!=null) prev.next=sec.next;

        else head = sec.next;

        return head;

    }
}