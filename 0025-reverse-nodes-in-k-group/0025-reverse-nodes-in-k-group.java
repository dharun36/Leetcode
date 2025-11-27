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
        ListNode curr = head;
        ListNode prev = null;
        ListNode temp;

        while(curr !=null){
            temp= curr.next;
            curr.next = prev;
            prev = curr;
            curr = temp;

        }
        return prev;
    }

    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode curr  = head;
        ListNode temp;
        ListNode prev=null;
        ListNode start = head;
        int count = 1;
        while(curr!=null){
            if(count%k==0){
                temp = curr.next;
                curr.next=null;
                ListNode rev = reverse(start);
                if(prev!=null)prev.next=rev;
                else head = rev;

                prev = start;
                start = curr = temp;
            }else
            curr=curr.next;
            count++;
        }

        prev.next = start;

        return head;


    }
}