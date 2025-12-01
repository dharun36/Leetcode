/*
  Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode partition(ListNode head, int x) {
        if(head == null || head.next == null)
return head;
        ListNode  left = null;
        ListNode  right= null;
        ListNode  temp = head;
        ListNode  firstleft = null, firstright = null;

        while(temp!=null){
            ListNode t = temp.next;
            temp.next = null;
            if(temp.val >= x){
                if(right == null){
                    right = temp;
                    firstright = temp;
                }
                else{
                     right.next = temp;
                     right = right.next;
                }
            }

            else {
                if(left == null){
                    left = temp;
                    firstleft = temp;

                }
                else {
                    left.next = temp;
                    left=left.next;
                    
                }

            }
            temp =t;
        }

        if(left!=null)
        left.next = firstright;
        else firstleft = firstright;
        return firstleft;
    }
}