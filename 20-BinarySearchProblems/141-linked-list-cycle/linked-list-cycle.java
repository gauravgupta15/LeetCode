/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public boolean hasCycle(ListNode head) {
        ListNode curr = head;
        if(head == null) return false;
        ListNode fast = head;
        while(fast != null && fast.next != null) {
            fast = fast.next.next;
            curr = curr.next;
            if(curr == fast) return true;
        }
        return false;
        // 
    }
}