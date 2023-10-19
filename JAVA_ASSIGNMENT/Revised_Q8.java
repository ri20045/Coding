import java.util.*;

/*10. Write a JAVA program to accept string from user.
Create a menu based program to find length of string, capacity of string, 
concatenate two string values, replace character “a” with “$”.*/

class code{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter a string: ");
		String str = sc.nextLine();
		StringBuffer buffer = new StringBuffer();
		System.out.println("Enter a stringBuffer: ");
		buffer = buffer.append(sc.nextLine());//PROBLEM
		System.out.println("1-find length \n 2-find capacity \n 3-concatenation of strings \n 4-Replacement");

		System.out.println("Enter your choice(1,2,3 or 4): ");
		int n = sc.nextInt();
		switch(n){
		case 1:
			//length
			System.out.println("Length of String "+ str+" is "+ (str.length()));
			break;
		case 2:
			//capacity
			System.out.println("Capacity of String "+buffer+" is "+(buffer.capacity()));
			break;
		case 3:
			//concatenation
			Scanner scan = new Scanner(System.in);
			System.out.println("Enter a string2: ");
			String str2 = scan.nextLine();
			String str3 = str.concat(str2);
			System.out.println("Conacatenated string is: "+str3);
			break;
		case 4:
			//replacement
			System.out.println("replaced string: "+(str.replace('a','$')));
			break;
		default:
			System.out.println("INVALID: choose from 1,2 or 3");
		}
	}
}
