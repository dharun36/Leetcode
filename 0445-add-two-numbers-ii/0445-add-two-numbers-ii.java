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

    public ListNode addTwoNumbers(ListNode l3, ListNode l4) {
        ListNode l1 = reverse(l3);
        ListNode l2 = reverse(l4);
        int carry = 0;
        ListNode head = new ListNode(0);
        ListNode temp=head;

        while(l1!=null && l2!=null){
            int sum = l1.val+l2.val+carry;
            head.next = new ListNode(sum%10);
            carry=sum/10;
            head=head.next;
            l1=l1.next;
            l2=l2.next;

        }

        while(l1!=null){
            int sum = l1.val+carry;
            head.next = new ListNode(sum%10);
            carry=sum/10;
            head=head.next;
            l1=l1.next;

            
        }

        while(l2!=null){
            int sum = l2.val+carry;
            head.next = new ListNode(sum%10);
            carry=sum/10;
            head=head.next;
            l2=l2.next;

        }

        while(carry>0){
            head.next=new ListNode(carry%10);
            carry/=10;
        }


        ListNode newh = reverse(temp.next);

        return newh;

        
    }
}