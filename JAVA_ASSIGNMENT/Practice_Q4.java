import java.util.*;
import javax.swing.*;

/*Write a JAVA code to get a string using inputbox count number of vowels 
and number of consonents in the string.*/

class code{
	public static void main(String[] args) {
		String str = JOptionPane.showInputDialog(null,"Enter String: ","Question",JOptionPane.INFORMATION_MESSAGE);
		str = str.toLowerCase();
		int vCount = 0;
		int cCount = 0;
		for(int i=0;i<str.length();i++)
		{
			if(str.charAt(i) == 'a' || str.charAt(i) == 'e' || str.charAt(i) == 'i' || str.charAt(i) == 'o' || str.charAt(i) == 'u'){
				vCount++;
			}
			else if(str.charAt(i) >= 'a' && str.charAt(i) <= 'z'){
				cCount++;
			}
		}
		JOptionPane.showMessageDialog(null,"No. of Vowels are: "+vCount+"\n\n No. of Consonants are: "+cCount,"VOWEL COUNT AND CONSONANT COUNT",JOptionPane.INFORMATION_MESSAGE);
	}
}
