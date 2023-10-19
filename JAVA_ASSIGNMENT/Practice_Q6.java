import java.util.*;

/*8.Write a JAVA program to input a string from user and 
count number of space and words in the string*/

class code{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String str = new String();
		System.out.println("Enter a String: ");
		str = sc.nextLine();
		int count = 0;
		int wCount = 1; //there has to be atleast one word stored in a string
		for(int i=0;i<str.length();i++){
			if(str.charAt(i) == ' '){
				count++;
			}
		}
		System.out.println("Whitespace: "+count);
		for(int i=0;i<str.length();i++){
			if(str.charAt(i) == ' ' && str.charAt(i+1) != ' '){
				wCount += 1;
			}
		}
		System.out.println("Word Count is: "+wCount);
	}
}
