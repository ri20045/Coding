import javax.swing.*;
// 11. Write a java code to get two strings using dialog and check both strings are equal or not.
class code{
    public static void main(String[] args){
       String input1 = JOptionPane.showInputDialog(null,"Enter string1: ","String Input",JOptionPane.QUESTION_MESSAGE);
       String input2 = JOptionPane.showInputDialog(null,"Enter string2: ","String Input",JOptionPane.QUESTION_MESSAGE);
       if(input1.equals(input2)){
        JOptionPane.showMessageDialog(null,"Both are equal","Result",JOptionPane.INFORMATION_MESSAGE);
       }
       else{
        JOptionPane.showMessageDialog(null,"Both are not equal string","Result",JOptionPane.INFORMATION_MESSAGE);
       }
    }
}
