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
    public boolean isPalindrome(ListNode head) {
        ListNode fast = head;
        ListNode slow = head;

        while(fast!=null && fast.next !=null){
            fast=fast.next.next;
            slow = slow.next;

        }

        ListNode second = reverse(slow);

        ListNode first  = head;

        while(second!=null){
            if(second.val != first.val){
                return false;
            }
            
            first=first.next;
            second=second.next;

        }   

        return true;

    }
}