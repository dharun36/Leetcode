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
    public ListNode swapPairs(ListNode head) {
        if(head == null || head.next == null)return head;
        // ListNode curr = head;
        ListNode prev = null;
        ListNode first = head;
        ListNode second = head.next;

        while(first != null && second != null){
            ListNode next =second.next;
           if(prev == null)head = second;
           else prev.next = second;
           second.next = first;
           first.next = next;
           prev= first;
           first = next;
           if(next != null)
           second = next.next;
        }

        return head;
    }
}