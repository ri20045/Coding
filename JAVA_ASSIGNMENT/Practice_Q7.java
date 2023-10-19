import java.util.*;
import javax.swing.*;

/*9.Write a JAVA program to enter a size an array n from user.
Create an array of that size and find min / max number from that array. 
Display min and max values in message box.*/

class code{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter n: ");
		int n = sc.nextInt();
		int a[] = new int[n];
		System.out.println("Enter elements: ");
		for(int i=0;i<n;i++){
			System.out.println("a["+i+"]: ");
			a[i] = sc.nextInt();
		}
		int min = a[0];
		int max = a[0];
		for(int i=0;i<n;i++){
			if(a[i] > max){
				max = a[i];
			}
		}

		for(int i=0;i<n;i++){
			if(a[i] < min){
				min = a[i];
			}
		}
		JOptionPane.showMessageDialog(null,"Maximum value: "+max+"\n"+"Minimum value: "+min,"ANSWERS",JOptionPane.INFORMATION_MESSAGE);
	}
}
