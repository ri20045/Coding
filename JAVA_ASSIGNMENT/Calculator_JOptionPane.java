import javax.swing.*;
class code{
   public static void main(String[] args) {
    do{
    String num1 = JOptionPane.showInputDialog(null, "Enter first number","Calculator",JOptionPane.QUESTION_MESSAGE);
    String num2 = JOptionPane.showInputDialog(null,"Enter second number","Calculator",JOptionPane.QUESTION_MESSAGE);
    int n1 = Integer.parseInt(num1);
    int n2 = Integer.parseInt(num2);
    int result = 0;
    String operation = "";
    String choice = JOptionPane.showInputDialog(null, "1-Addition \n 2-Subtraction \n 3-Multiplication \n 4-Division \n\nEnter your choice", "Choose",JOptionPane.QUESTION_MESSAGE);
    int ch = Integer.parseInt(choice);
    switch(ch){
        case 1:
        result = n1 + n2;
        operation = "Addition";
        break;
        case 2:
        result = n1 - n2;
        operation = "Subtraction";
        break;
        case 3:
        result = n1 * n2;
        operation = "Multiplication";
        break;
        case 4:
        if(n2 == 0){
            JOptionPane.showMessageDialog(null,"Invalid","Calculator",JOptionPane.WARNING_MESSAGE);
        }
            result = n1/n2;
            operation = "Division";
            break;
        }
        JOptionPane.showMessageDialog(null,operation + " result: " + result, "Calculator",JOptionPane.INFORMATION_MESSAGE);
        int continueChoice = JOptionPane.showConfirmDialog(null,"Do you want to continue","Calculator",JOptionPane.YES_NO_CANCEL_OPTION);
        if(continueChoice == JOptionPane.NO_OPTION){
            JOptionPane.showMessageDialog(null,"Exiting the calculator","Calculator",JOptionPane.INFORMATION_MESSAGE);
            break;
            }
        }
        while(true);
    }
}
