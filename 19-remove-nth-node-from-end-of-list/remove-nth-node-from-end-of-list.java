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
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode fast = head;
        ListNode slow = head;
        int cnt = 0;
      while(fast!=null) {
        cnt++;
        fast = fast.next;
      }
    //   cout << cnt<<endl;
      int path = cnt - n;
      if(path == 0) return head.next;
      int check = 1;
      while(slow !=null) {
        if(path == check ) {
            slow.next = slow.next.next;
        }
        slow=slow.next;
        check++;
      }
      return head;
   

      
    }
}