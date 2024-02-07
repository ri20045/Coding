/****************************************************************
 * 
 * Following is the class structure of the Node class:
 * 
 * class Node {
 * public int data;
 * public Node next;
 * public Node prev;
 * 
 * Node()
 * {
 * this.data = 0;
 * this.next = null;
 * this.prev = null;
 * }
 * 
 * Node(int data)
 * {
 * this.data = data;
 * this.next = null;
 * this.prev = null;
 * }
 * 
 * Node(int data, Node next, Node prev)
 * {
 * this.data = data;
 * this.next = next;
 * this.prev = prev;
 * }
 * };
 * 
 *****************************************************************/

public class Solution {
    public static Node insertAtTail(Node list, int K) {
        // Write your code here
        Node temp = new Node();
        Node p = list;
        Node secondLast = null;
        while (p != null) {
            secondLast = p;
            p = p.next;
        }
        temp.data = K;
        temp.next = null;
        if (secondLast != null) {
            secondLast.next = temp;
            temp.prev = secondLast;
        }
        else {
            list = temp;
        }
        return list;
    }
}
