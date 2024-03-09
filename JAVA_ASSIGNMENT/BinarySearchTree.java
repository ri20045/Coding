import java.util.*;

class Node {
    Node left;
    Node right;
    int data;

    Node(int data) {
        this.data = data;
    }
}

public class BST {
    Node rootNode = new Node(25);

    public void createTree() {
        // System.out.println("Building tree " + rootNode.data + "\n");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of value to insert (n): ");
        int n = sc.nextInt();
        for (int i = 0; i < n; i++) {
            int value = sc.nextInt();
            insert(rootNode, value);
        }
        // insert(rootNode, 11);
        // insert(rootNode, 15);
        // insert(rootNode, 16);
        // insert(rootNode, 23);
        // insert(rootNode, 79);
    }

    public void insert(Node node, int data) {
        if (data < node.data) {
            if (node.left != null) {
                insert(node.left, data);
            } else {
                System.out.println("Inserted " + data + " to the left of " + node.data);
                node.left = new Node(data);
            }
        } else if (data > node.data) {
            if (node.right != null) {
                insert(node.right, data);
            } else {
                System.out.println("Inserted " + data + " to the right of " + node.data);
                node.right = new Node(data);
            }
        }
    }

    public void inorder(Node temp) {
        // left -> root -> right
        if (temp == null)
            return;
        inorder(temp.left);
        System.out.print(temp.data + " ");
        inorder(temp.right);
    }

    public void preorder(Node temp) {
        // root -> left -> right
        if (temp == null)
            return;
        System.out.print(temp.data + " ");
        preorder(temp.left);
        preorder(temp.right);
    }

    public void postorder(Node temp) {
        // left -> right -> root
        if (temp == null)
            return;
        postorder(temp.left);
        postorder(temp.right);
        System.out.print(temp.data + " ");
    }

    public static void main(String[] args) {
        BST bst = new BST();
        bst.createTree();
        Scanner sc = new Scanner(System.in);
        System.out.println("1. for inorder \n");
        System.out.println("2. for preorder \n");
        System.out.println("3. for postorder \n");
        int choice;
        do {
            System.out.print("\n Enter choice: ");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("Inorder traversal \n");
                    bst.inorder(bst.rootNode);
                    break;

                case 2:
                    System.out.println("Preorder traversal \n");
                    bst.preorder(bst.rootNode);
                    break;

                case 3:
                    System.out.println("Postorder traversal \n");
                    bst.postorder(bst.rootNode);
                    break;

                case 4:
                    System.exit(0);
            }
        } while (choice != 5);
    }
}
