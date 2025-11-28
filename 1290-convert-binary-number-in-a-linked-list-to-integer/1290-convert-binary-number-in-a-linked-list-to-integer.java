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

    public ListNode reverse(ListNode head){
        ListNode prev = null;
        ListNode curr = head;
        ListNode temp;

        while(curr != null){
            temp =  curr.next;
            curr.next = prev;
            prev = curr;
            curr = temp;


        }

        return prev;
    }

    public int getDecimalValue(ListNode head) {
        head = reverse(head);
        int sum=0;
        int twopow=1;

        while(head != null){
            sum+=head.val*twopow;
            twopow *= 2;
            head=head.next;

        }

        return sum;
    }
}