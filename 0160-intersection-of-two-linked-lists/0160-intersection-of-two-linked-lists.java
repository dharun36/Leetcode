public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        HashSet<ListNode> hs = new HashSet<>();
        ListNode temp= headA;

        while(temp!=null){
            hs.add(temp);
            temp=temp.next;

        }
        temp= headB;

        while(temp!=null){
            if(hs.contains(temp)) return temp;
            temp=temp.next;

        }
        return null;

    }
}