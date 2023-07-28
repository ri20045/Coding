import javax.swing.*;
// 10. Write a java code to get two values using input dialog and display addition operation using message dialog
class code{
    public static void main(String[] args){
        String input1 = JOptionPane.showInputDialog(null,"Enter first number","INPUT",JOptionPane.QUESTION_MESSAGE);
        String input2 = JOptionPane.showInputDialog(null,"Enter second number","INPUT",JOptionPane.QUESTION_MESSAGE);
        int value1 = Integer.parseInt(input1);
        int value2 = Integer.parseInt(input2);
        int sum = value1 + value2;
        JOptionPane.showMessageDialog(null,"The sum is: "+sum,"Result",JOptionPane.INFORMATION_MESSAGE);
    }
}
