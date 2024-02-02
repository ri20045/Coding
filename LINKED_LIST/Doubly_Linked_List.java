import java.util.*;

class Node {
    int data;
    Node next, prev;

    Node(int data) {
        this.data = data;
        this.next = null;
        this.prev = null;
    }

    Node() {

    }
}

class DoublyLL {
    Node head;

    void addFirst() {
        Node temp = new Node();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value to insert: ");
        int value = sc.nextInt();
        temp.data = value;
        temp.next = head;
        temp.prev = null;
        if (head != null) {
            head.prev = temp;
        }
        head = temp;
    }

    void addLast() {
        Node temp = new Node();
        Node p = new Node();
        p = head;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value to insert: ");
        int value = sc.nextInt();
        temp.data = value;
        while (p.next != null) {
            p = p.next;
        }
        p.next = temp;
        temp.prev = p;
        temp.next = null;
    }

    void addAtLocation() {
        int value, loc;
        Node p = new Node();
        Node temp = new Node();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value to insert: ");
        value = sc.nextInt();
        System.out.println("Enter location: ");
        loc = sc.nextInt();
        temp.data = value;
        if (loc < 1) {
            System.out.println("value must be greater than 1");
        } else if (loc == 1) {
            temp.data = value;
            temp.next = head;
            temp.prev = null;
            head.prev = temp;
            head = temp;
        } else {
            p = head;
            for (int i = 2; i < loc; i++) {
                if (p != null) {
                    p = p.next;
                }
            }
            temp.next = p.next;
            p.next = temp;
        }
    }

    void display() {
        Node temp = new Node();
        temp = head;
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    void displayReverse() {
        Node p = new Node();
        p = head;
        while (p.next != null) {
            p = p.next;
        }
        while (p != null) {
            System.out.print(p.data + " -> ");
            p = p.prev;
        }
        System.out.println("START");
    }

    void deleteFirst() {
        System.out.println("Deleted node is: " + head.data);
        head = head.next;
    }

    void deleteLast() {
        Node p = head;
        Node secondLast = new Node();
        while (p.next != null) {
            secondLast = p;
            p = p.next;
        }
        System.out.println("Deleted node is: " + p.data);
        p = null;
        secondLast.next = null;
    }

    void deleteAtLocation() {
        int loc;
        Node p = new Node();
       Node current = head;
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter location: ");
        loc = sc.nextInt();
        if (loc < 1) {
            System.out.println("value must be greater than 1");
        } else if (loc == 1) {
            System.out.println("Deleted node is: " + head.data);
            head = head.next;
        } else {
            for (int i = 1; i< loc ;i++) {
                current = current.next;
            }

            System.out.println("Deleted node is: " + current.data);
             if (current != null) {
                current.prev.next = current.next;
            }
             if (current.next != null) {
                current.next.prev = current.prev;
            }
        }
    }

    public static void main(String[] args) {
        DoublyLL list = new DoublyLL();
        Scanner sc = new Scanner(System.in);
        int choice;
        do {
            System.out.println("1. for adding at first ");
            System.out.println("2. displaying ");
            System.out.println("3. for adding at last ");
            System.out.println("4. add at location ");
            System.out.println("5. delete first node ");
            System.out.println("6. delete last ");
            System.out.println("7. delete at location ");
            System.out.println("8. display Reverse ");
            System.out.println("9. exit ");
            System.out.println("Enter choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    list.addFirst();
                    break;
                case 2:
                    list.display();
                    break;
                case 3:
                    list.addLast();
                    break;
                case 4:
                    list.addAtLocation();
                    break;
                case 5:
                    list.deleteFirst();
                    break;
                case 6:
                    list.deleteLast();
                    break;
                case 7:
                    list.deleteAtLocation();
                    break;
                case 8:
                    list.displayReverse();
                    break;
                case 9:
                    System.exit(0);
                default:
                    System.out.println("Invalid Choice");
            }
        } while (choice != 9);
    }
}
