import java.util.*;

/*Write a JAVA program that takes user choice to create mutable or immutable strings.
If user selects mutable strings, take string from user and find its length, 
capacity and reverse it.If user selects immutable strings, take 2 strings, 
find length of both strings and compare both strings*/

class adapt{
void mutableString(){
	//STRING BUFFER
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter a string: ");
	String str = sc.next();
	StringBuffer s = new StringBuffer(str);
	System.out.println("The length of String "+str+" is "+(s.length()));
	System.out.println("The capacity of String "+str+" is "+(s.capacity()));
	System.out.println("Reverse of String "+str+" is "+(s.reverse()));
}

void immutableString(){
	//STRING
	Scanner sc = new Scanner(System.in);
	System.out.println("Enter string 1: ");
	String str1 = sc.next();
	System.out.println("Enter string 2: ");
	String str2 = sc.next();
	System.out.println("The length of String "+str1+" is "+(str1.length())+" and "+" length of "+str2+" is "+(str2.length()));
	if(str1.equals(str2)){
		System.out.println("Both are same strings");
	}
	else{
		System.out.println("Both are not the same strings");
	}
}
}
class code{

	public static void main(String[] args) {
		adapt adapter = new adapt();
		Scanner sc = new Scanner(System.in);
		System.out.println("1. Mutable Strings");
		System.out.println("2. Immutable Strings");
		System.out.println("Enter your choice (1 OR 2) : ");
		int n = sc.nextInt();
		switch(n){
		case 1:
			adapter.mutableString();
			break;
		case 2:
			adapter.immutableString();
			break;
		default:
			System.out.println("INVALID: Choose from 1 and 2");
		}
	}
}
