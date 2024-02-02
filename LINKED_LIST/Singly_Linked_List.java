import java.util.*;

class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }

    Node() {

    }
}

class SinglyLL {
    Node head;

    SinglyLL() {
        this.head = null;
    }

    void addFirst() {
        Node temp = new Node();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value to insert: ");
        int value = sc.nextInt();
        temp.data = value;
        temp.next = null;
        if (head == null) {
            head = temp;
        } else {
            temp.next = head;
            head = temp;
        }
        // sc.close();
    }

    void addLast() {
        Node temp = new Node();
        Node p = new Node();
        p = head;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter value to insert: ");
        int value = sc.nextInt();
        temp.data = value;
        temp.next = null;
        while (p.next != null) {
            p = p.next;
        }
        p.next = temp;
        // sc.close();
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
        temp.next = null;
        if (loc < 1) {
            System.out.println("Location must be greater than 1. ");
        } else if (loc == 1) {
            temp.next = head;
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

    void deleteFirst() {
        System.out.println("Deleted node is: " + head.data);
        head = head.next;
    }

    void deleteLast() {
        Node p = head;
        Node secondLast = null;
        while (p.next != null) {
            secondLast = p;
            p = p.next;
        }
        System.out.println("Deleted node: " + p.data);
        p = null;
        secondLast.next = null;
    }

    void deleteAtLocation() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter location: ");
        int loc = sc.nextInt();
        Node p = head;
        if (loc < 1) {
            System.out.println("Location must be greater than 1");
        } else if (loc == 1) {
            deleteFirst();
        } else {
            for (int i = 2; i < loc; i++) {
                p = p.next;
            }
            System.out.println("deleted node is: " + p.next);
            p.next = p.next.next;
        }
    }

    void display() {
        Node temp = head;
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }

    public static void main(String[] args) {
        SinglyLL list = new SinglyLL();
        Scanner sc = new Scanner(System.in);
        int choice;
        do {

            System.out.println("1. for adding at first ");
            System.out.println("2. displaying ");
            System.out.println("3. for ading at last ");
            System.out.println("4. add at location ");
            System.out.println("5. delete first node ");
            System.out.println("6. delete last ");
            System.out.println("7. delete at location ");
            System.out.println("8. exit ");
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
                    System.exit(0);
                default:
                    System.out.println("Invalid Choice");
            }
        } while (choice != 8);

    }

}
