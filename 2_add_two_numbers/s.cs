namespace s2
{
    public class Solution
    {

        public class ListNode
        {
            public int val;
            public ListNode next;
            public ListNode(int x) { val = x; }
        }

        public ListNode AddTwoNumbers(ListNode l1, ListNode l2)
        {
            ListNode head = null;
            ListNode cur = null;
            var next = 0;
            while (l1 != null || l2 != null)
            {
                var a = l1 != null ? l1.val : 0;
                var b = l2 != null ? l2.val : 0;
                var sum = a + b + next;
                var node = new ListNode(sum % 10);
                if (head == null)
                {
                    head = node;
                    cur = node;
                }
                else
                {
                    cur.next = node;
                    cur = node;
                }
                next = sum / 10;
                if (l1 != null) l1 = l1.next;
                if (l2 != null) l2 = l2.next;
            }

            if (next > 0)
            {
                cur.next = new ListNode(next);
            }

            return head;
        }
    }
}