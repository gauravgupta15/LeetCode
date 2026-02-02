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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode dummy = new ListNode(0);
        ListNode curr = dummy;
        ListNode h1 = l1;
        ListNode h2 = l2;
        int add = 0;
        int sum = 0;
        while(h1 != null || h2 != null || add != 0) {
           sum = 0;
            if(h1 != null) {
                sum+=h1.val;
            } 
            if(h2 != null) {
                sum += h2.val;
            }
            sum+=add;
            add = sum/10;
            sum %=10;
            ListNode newNode = new ListNode(sum);
            curr.next = newNode;
            curr = curr.next;
            if(h1 != null) h1 = h1.next;
            if(h2 != null) h2 = h2.next;
        }
        return dummy.next;
    }
}