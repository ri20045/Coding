/****************************************************************

 Following is the class structure of the Node class:

 class Node {
     public int data;
     public Node next;
     public Node prev;

     Node()
     {
         this.data = 0;
         this.next = null;
         this.prev = null;
     }

     Node(int data)
     {
         this.data = data;
         this.next = null;
         this.prev = null;
     }

     Node(int data, Node next)
     {
         this.data = data;
         this.next = next;
         this.prev = next;
     }
 };

 *****************************************************************/

public class Solution
{
    public static Node reverseDLL(Node head)
    {
        // Write your code here. 
        if (head == null || head.next == null)
        {
            return head;
        }
        Node prev = null;
        Node current = head;
        while (current != null)
        {
            prev = current.prev;
            current.prev = current.next;
            current.next = prev;
            current = current.prev;
        }
        return prev.prev;
    }
}
