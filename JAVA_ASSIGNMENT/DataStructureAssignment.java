import java.util.*;
// 6. Write a java code to create 2*2 matrix and print on terminal
class MultiDimArray
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of rows: ");
        int row = sc.nextInt();
        System.out.println("Enter number of columns: ");
        int column = sc.nextInt();
        int arr[][] = new int[row][column];
        System.out.println("Enter elements");
        for (int i=0; i<row; i++) {
            for (int j=0; j<column; j++) {
                System.out.print("a[" + (i+1) + "][" + (j+1) + "]: ");
                arr[i][j] = sc.nextInt();
            }
        }
        sc.close();
        for (int i=0; i<row; i++) {
            for (int j=0; j<column; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}


++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

import java.util.*;
// 1. Write a java code to create an array of five elements and print on terminal
public class PrintArray
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter number of elements: ");
        n = sc.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements");
        for(int i=0; i<n; i++)
        {
            System.out.print("a[" + i + "]: ");
            arr[i] = sc.nextInt();
        }
        sc.close();
        for (int i=0; i<n; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

import java.util.*;
// 3. Write a java code to perform addition of two array and save it into third array
public class SumArray
{
    public static void main(String[] args) {
       int[] Array1 = {1,2,3,4,5};
       int[] Array2 = {2,3,4,5,6};

       int[] sumArray = new int[Array1.length];
       for (int i=0; i< Array1.length; i++)
       {
        sumArray[i] = Array1[i] + Array2[i];
       }
       for (int i=0; i<Array1.length; i++) 
       {
        System.out.print(sumArray[i] + " ");
       }
    }
}

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

import java.util.*;
// 5. Write a java code sum of all array elements
public class SumElements
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter Elements");
        for (int i=0; i<n; i++) {
            System.out.print("a[" + i + "]: ");
            arr[i] = sc.nextInt();
        }
        sc.close();
        int sumOfElements = 0;
        for (int i=0; i<n; i++)
        {
            sumOfElements += arr[i];
        }
        System.out.println("Sum of Elements is: " + sumOfElements);
    }
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

import java.util.*;
// 7. Write a java code to peroform addition of two matrix
class SumOfMultiDimArray
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of row1s: ");
        int row1 = sc.nextInt();
        System.out.println("Enter number of column1s: ");
        int column1 = sc.nextInt();
        int arr1[][] = new int[row1][column1];
        System.out.println("Enter elements");
        for (int i=0; i<row1; i++) {
            for (int j=0; j<column1; j++) {
                System.out.print("a[" + (i+1) + "][" + (j+1) + "]: ");
                arr1[i][j] = sc.nextInt();
            }
        }

        System.out.println("Enter number of rows2: ");
        int row2 = sc.nextInt();
        System.out.println("Enter number of columns2: ");
        int column2 = sc.nextInt();
        int arr2[][] = new int[row2][column2];
        System.out.println("Enter elements");
        for (int i=0; i<row2; i++) {
            for (int j=0; j<column2; j++) {
                System.out.print("a[" + (i+1) + "][" + (j+1) + "]: ");
                arr2[i][j] = sc.nextInt();
            }
        }
        sc.close();

        int[][] sumMatrix = new int[row1][column1];
        for (int i=0; i<arr1.length; i++) {
            for (int j=0; j<arr1.length; j++) {
                sumMatrix[i][j] = arr1[i][j] + arr2[i][j];
            }
        }

        for (int i = 0; i < sumMatrix.length; i++) {
            for (int j = 0; j < sumMatrix.length; j++) {
                System.out.print(sumMatrix[i][j] + " ");
            }
            System.out.println();
        }
    }
}

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

import java.util.*;
// 1. Write a java code to create an array of 3*3 matrix and perform addition operation
class MatrixSum3
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of rows: ");
        int row = sc.nextInt();
        System.out.println("Enter number of columns: ");
        int col = sc.nextInt();
        int[][] array1 = new int[row][col];
        System.out.println("Enter elements for array1: ");
        for (int i=0; i<row; i++) {
           for (int j=0; j<col; j++) {
            System.out.print("a[" + (i+1) + "][" + (j+1) + "]: ");
            array1[i][j] = sc.nextInt();
           }
        }
        int[][] array2 = new int[row][col];
        System.out.print("Enter elements for array2:\n");
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
             System.out.print("a[" + (i+1) + "][" + (j+1) + "]: ");
             array2[i][j] = sc.nextInt();
            }
         }
        int[][] array3 = new int[row][col];
        System.out.print("Enter elements for array3:\n");
        for (int i=0; i<row; i++) {
            for (int j=0; j<col; j++) {
             System.out.print("a[" + (i+1) + "][" + (j+1) + "]: ");
             array3[i][j] = sc.nextInt();
            }
         }
        sc.close();

        int[][] sumArray = new int[row][col];
        for (int i=0; i<array1.length; i++) {
            for (int j=0; j<array1.length; j++) {
                sumArray[i][j] = array1[i][j] - array2[i][j] - array3[i][j];
            }
        }
        for (int i=0; i<array1.length; i++) {
            for (int j=0; j<array1.length; j++) {
                System.out.print(sumArray[i][j] + " ");
            }
            System.out.println();
        }
    }
}

+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

import java.util.*;
// 5. Write a java code to create a Upper and Lower Trianguler matrix using UDF
class TriangularMatrix
{

    static void printUpperTriangular(int[][] matrix, int size) {
        System.out.println("Upper Triangular Matrix:");
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                if (i <= j) {
                    System.out.print(matrix[i][j] + " ");
                }
                else {
                    System.out.print("0 ");
                }
            }
            System.out.println();
        }
    }

    static void printLowerTriangular(int[][] matrix, int size) {
        System.out.println("Lower Triangular Matrix:");
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                if (i >= j) {
                    System.out.print(matrix[i][j] + " ");
                }
                else {
                    System.out.print("0 ");
                }
            }
            System.out.println();
        }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the matrix: ");
        int size = sc.nextInt();
        int[][] matrix = new int[size][size];
        System.out.println("Enter elements");

        //taking inpur for matrix
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                System.out.print("a[" + i + "][" + j + "]: ");
                matrix[i][j] = sc.nextInt();
            }
        }
        sc.close();
        //displaying matrix
        for (int i=0; i<size; i++) {
            for (int j=0; j<size; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        printUpperTriangular(matrix, size);
        printLowerTriangular(matrix, size);
    }
}
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

import java.util.*;

// 1. Write a java code to create a stack of five integer elements and perform following operations.
// Push,pop,peek, stack is empty or not, stack is full.
class CustomStack {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter stack size: ");
        int stack_size = sc.nextInt();
        Stack_example obj = new Stack_example(stack_size);

        int choice;
        System.out.println("1 - push");
        System.out.println("2 - pop");
        System.out.println("3 - peek");
        System.out.println("4 - isEmpty");
        System.out.println("5 - isFull");
        System.out.println("6 - Exit the program");
        do {

            System.out.println("Enter choice(1-6): ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Enter element to push: ");
                    int element = sc.nextInt();
                    obj.push(element);
                    break;
                case 2:
                    obj.pop();
                    break;
                case 3:
                    obj.peek();
                    break;
                case 4:
                    System.out.println("Is stack empty: " + obj.isEmpty());
                    break;
                case 5:
                    System.out.println("Is stack full: " + obj.isFull());
                    break;
                case 6:
                    System.out.println("Exiting the code");
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        } while (choice != 6);

        sc.close();
    }
}

class Stack_example {
    private int maxSize;
    private int top;
    private int[] stack_arr;

    public Stack_example(int size) {
        maxSize = size;
        stack_arr = new int[maxSize];
        top = -1; // stack is initially empty
    }

    public void push(int value) {
        if (top == (maxSize - 1)) {
            System.out.println("Stack overflow");
        } else {
            top++;
            stack_arr[top] = value;
            System.out.println("Pushed element: " + value);
        }
    }

    public void pop() {
        if (top == -1) {
            System.out.println("Stack underflowed");
        } else {
            int poppedValue = stack_arr[top];
            top--;
            System.out.println("Popped value is: " + poppedValue);
        }
    }

    public void peek() {
        if (top == -1) {
            System.out.println("Stack is empty");
        } else {
            System.out.println("Peek value is: " + stack_arr[top]);
        }
    }

    public boolean isEmpty() {
        return top == -1;
    }

    public boolean isFull() {
        return top == maxSize - 1;
    }
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

import java.util.*;

// 3. write a java code to create a queue of five numbers and perform enqueue and dequeue operations 
// using switch case
class CustomQueue {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size for Queue: ");
        int queue_size = sc.nextInt();

        Queue_example obj = new Queue_example(queue_size);
        System.out.println("1 - Enqueue");
        System.out.println("2 - Dequeue");
        System.out.println("3 - peek");
        System.out.println("4 - display");
        System.out.println("5 - exit");
        int choice;
        do {
            System.out.println("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Enter Value to insert: ");
                    int value = sc.nextInt();
                    obj.enqueue(value);
                    break;
                case 2:
                    obj.dequeue();
                    break;
                case 3:
                    obj.peek();
                    break;
                case 4:
                    obj.display();
                    break;
                case 5:
                    System.out.println("Exiting the code");
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        } while (choice != 5);
        sc.close();
    }
}

class Queue_example {
    private int maxSize;
    private int queue_arr[];
    private int front;
    private int rear;

    public Queue_example(int size) {
        maxSize = size;
        queue_arr = new int[maxSize];
        front = -1;
        rear = -1; // Queue is initially empty
    }

    public void enqueue(int element) {
        if (rear == (maxSize - 1)) {
            System.out.println("Overflow");
        } else if (rear == -1 && front == -1) {
            front = rear = 0;
            queue_arr[rear] = element;
        } else {
            rear++;
            queue_arr[rear] = element;
        }
        System.out.println("Value inserted: " + element);
    }

    public void dequeue() {
        if (rear == -1 && front == -1) {
            System.out.println("Underflow or empty queue");
        } else if (front == rear) {
            front = rear = -1;
        } else {
            System.out.println("Element deleted is: " + queue_arr[front]);
            front++;
        }
    }

    public void peek() {
        if (rear == -1 && front == -1) {
            System.out.println("empty queue");
        } else {
            System.out.println("Peek value: " + queue_arr[front]);
        }
    }

    public void display() {
        if (rear == -1 && front == -1) {
            System.out.println("empty queue");
        } else {
            for (int i = front; i < rear + 1; i++) {
                System.out.println(queue_arr[i] + " ");
            }
        }
    }

}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

import java.util.Scanner;
// 1. Write java code to create a Circular Queue and perform following operations using switch case
// 1. insert() 
// 2. delete() 
// 3. display() 
// 4. exit

class CircularQueue {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size for cicular queue: ");
        int queue_size = sc.nextInt();

        CircularQueue_example obj = new CircularQueue_example(queue_size);
        System.out.println("1 - insert");
        System.out.println("2 - delete");
        System.out.println("3 - display");
        System.out.println("4 - exit");

        int choice;
        do {
            System.out.println("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Enter value to be inserted: ");
                    int value = sc.nextInt();
                    obj.insert(value);
                    break;
                case 2:
                    obj.delete();
                    break;
                case 3:
                    obj.display();
                    break;
                case 4:
                    System.out.println("Exiting the code");
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        } while (choice != 4);

    }
}

class CircularQueue_example {
    private int maxSize;
    private int cQueue[];
    private int front;
    private int rear;

    public CircularQueue_example(int size) {
        maxSize = size;
        cQueue = new int[maxSize];
        front = -1;
        rear = -1; // initially Queue is empty
    }

    public void insert(int element) {
        if (front == -1 && rear == -1) {
            rear = front = 0;
            cQueue[rear] = element;
            System.out.println("Element inserted is: " + element);
        } else if ((rear + 1) % maxSize == front) {
            System.out.println("Overflowed");
        } else {
            rear = (rear + 1) % maxSize;
            cQueue[rear] = element;
            System.out.println("Element inserted is: " + element);
        }
    }

    public void delete() {
        if (front == -1 && rear == -1) {
            System.out.println("Underflow");
        } else if (front == rear) {
            System.out.println("deleted element: " + cQueue[front]);
            front = rear = -1;
        } else {
            System.out.println("deleted element: " + cQueue[front]);
            front = (front + 1) % maxSize;
        }
    }

    public void display() {
        int i = front;
        if (front == -1 && rear == -1) {
            System.out.println("Empty");
        } else {
            while (i != rear) {
                System.out.print(cQueue[i] + " ");
                i = (i + 1) % maxSize;
            }
            System.out.print(cQueue[rear]);
        }
    }
}

++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

import java.util.Scanner;

// 2. Write a program using java to create double ended queue and perform following operations
// 1. insert element at front 
// 2. insert element at rear
class DoubleEndedQueue {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size for deque array: ");
        int size = sc.nextInt();

        Deque obj = new Deque(size);

        System.out.println("1 - insertfront");
        System.out.println("2 - insertrear");
        System.out.println("3 - deletefront");
        System.out.println("4 - deleterear");
        System.out.println("5 - display");
        System.out.println("6 - exit");

        int choice;
        do {
            System.out.println("Enter choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.println("Enter value to insert at front: ");
                    int frontValue = sc.nextInt();
                    obj.insertfront(frontValue);
                    break;
                case 2:
                    System.out.println("Enter value to insert at rear: ");
                    int rearValue = sc.nextInt();
                    obj.insertrear(rearValue);
                    break;
                case 3:
                    obj.deletefront();
                    break;
                case 4:
                    obj.deleterear();
                    break;
                case 5:
                    obj.display();
                    break;
                case 6:
                    System.out.println("Exiting the code");
                    break;
                default:
                    System.out.println("Invalid choice");
            }
        } while (choice != 6);

        sc.close();
    }
}

class Deque {
    private int maxSize;
    private int deque[];
    private int rear;
    private int front;

    public Deque(int x) {
        maxSize = x;
        deque = new int[maxSize];
        rear = -1;
        front = -1;
    }

    public void insertfront(int value) {
        if (rear == -1 && front == -1) {
            front = rear = 0;
            deque[front] = value;
            System.out.println("Element inserted from front: " + value);
        } else if ((front - 1 + maxSize) % maxSize == rear) {
            System.out.println("Overflow");
        } else if (front == 0) {
            front = maxSize - 1;
            deque[front] = value;
            System.out.println("Element inserted from front: " + value);
        } else {
            front--;
            deque[front] = value;
            System.out.println("Element inserted from front: " + value); // checkpoint
        }

    }

    public void insertrear(int value) {
        if (rear == -1 && front == -1) {
            front = rear = 0;
            deque[rear] = value;
            System.out.println("Element inserted from rear: " + value);
        } else if ((front - 1 + maxSize) % maxSize == rear) {
            System.out.println("Overflow");
        } else if (rear == maxSize - 1) {
            rear = 0;
            deque[rear] = value;
            System.out.println("Element inserted from rear: " + value);
        } else {
            rear++;
            deque[rear] = value;
            System.out.println("Element inserted from rear: " + value);
        }

    }

    public void deletefront() {
        if (rear == -1 && front == -1) {
            System.out.println("Underflow");
        } else if (front == rear) {
            System.out.println("Element deleted from front: " + deque[front]);
            front = rear = -1;
        } else if (front == maxSize - 1) {
            System.out.println("Element deleted from front: " + deque[front]);
            front = 0;
        } else {
            System.out.println("Element deleted from front: " + deque[front]);
            front++;
        }
    }

    public void deleterear() {
        if (rear == -1 && front == -1) {
            System.out.println("Empty");
        } else if (front == rear) {
            System.out.println("Element deleted from rear: " + deque[rear]);
            front = rear = -1;
        } else if (rear == 0) {
            System.out.println("Element deleted from rear: " + deque[rear]);
            front = maxSize - 1;
        } else {
            System.out.println("Element deleted from rear: " + deque[rear]);
            rear--;
        }
    }

    public void display() {
        if (front == -1 && rear == -1) {
            System.out.println("queue is empty");
            return;
        }
        int i = front;
        while (i != rear) {
            System.out.print(deque[i] + " ");
            i = (i + 1) % maxSize;
        }
        System.out.print(deque[rear]);
        System.out.println();
    }
}

