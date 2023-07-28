import javax.swing.*;
// 8. Write a java code to display a dialog box Yes, No, Cancel. (Hint Use JoptionPane)

class code{
    public static void main(String[] args){
        int choice = JOptionPane.showConfirmDialog(null, "Do you want to proceed?", "Confirmation", JOptionPane.YES_NO_CANCEL_OPTION, JOptionPane.QUESTION_MESSAGE);

    if (choice == JOptionPane.YES_OPTION) {
        JOptionPane.showMessageDialog(null,"You chose Yes.");
    } else if (choice == JOptionPane.NO_OPTION) {
        JOptionPane.showMessageDialog(null,"You chose No");
    } else if (choice == JOptionPane.CANCEL_OPTION) {
        JOptionPane.showMessageDialog(null,"You chose Cancel.");
    } else if (choice == JOptionPane.CLOSED_OPTION) {
        JOptionPane.showMessageDialog(null,"Dialog box closed without making a choice.");
    }
    }
}
