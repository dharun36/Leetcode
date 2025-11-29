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
    public ListNode rotateRight(ListNode head, int k) {
        if(head == null || head.next == null)return head;
        if(k == 0)return head;
        ListNode temp = head; ListNode newhead;
        ListNode prev = null;

        int len=1;
        while(temp.next!=null){
            
            temp = temp.next;
            len++;
        }

        int rem = k%len;
        int tra = len-rem;
        temp.next = head;

        temp = head;

        while(tra>1){
            temp=temp.next;
            tra--;
        }
        

        newhead = temp.next;
        temp.next=null;


        return newhead;
    }
}
