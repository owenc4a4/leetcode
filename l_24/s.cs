public class ListNode {
      public int val;
      public ListNode next;
      public ListNode(int val=0, ListNode next=null) {
          this.val = val;
          this.next = next;
      }
 }
 
    public class Solution
    {
        public ListNode SwapPairs(ListNode head)
        {
            if (head == null)
            {
                return head;
            }
            

            var newHead = head;
            if (head.next != null)
            {
                newHead = head.next;
            }

            var node = head;
            ListNode par = null;
            while (node != null && node.next != null)
            {
                var next = node.next;


                var tmp = node.next.next;
                node.next.next = node;
                node.next = tmp;

                if (par != null)
                {
                    par.next = next;
                }

                par = node;
                node = node.next;


            }

            return newHead;
        }
    }
    }