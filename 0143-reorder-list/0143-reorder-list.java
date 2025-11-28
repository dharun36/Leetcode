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

    public void reorderList(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        ListNode curr = head;
        
        while(fast!=null && fast.next !=null){
            fast = fast.next.next;

            slow = slow.next;
        }


        ListNode second = reverse(slow.next);
        slow.next = null;
        
        ListNode temp1 = null;
        ListNode temp2 = null;

        while(second != null){
            temp1 = curr.next;
            curr.next = second;
            curr = temp1;
            temp2 = second.next;
            second.next = temp1;
            second = temp2;

            
        }



    }
}