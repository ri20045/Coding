import java.util.*;
import javax.swing.*;

// 1. Perform arithmetic operation (+, -, *, /) and 
// relational operations (<, >, =) 25 using user defined functions 
// and display answer in message box.
// Write a JAVA program to Create a class named Product that store product details 
// as product no, product name, product date of manufacturing.
// Derive a class name Product_info from Product, containing price, quantity
// and amount as data members.
class Product{
	int product_no;
	String product_name;
	String product_date;

	void getInfo(){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter product_no: ");
		product_no = sc.nextInt();
		System.out.println("Enter product_name: ");
		product_name = sc.next();
		System.out.println("Enter product_date: ");
		product_date = sc.next();
	}
	void display_info(){
		System.out.println("Product Number is: "+product_no);
		System.out.println("Product Name is: "+product_name);
		System.out.println("Product date of manufacturing is: "+product_date);
	}
}
class Product_Info extends Product{
	int price;
	int quantity;
	int amount;

	void getInfo(){
		super.getInfo();
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter product price: ");
		price = sc.nextInt();
		System.out.println("Enter quantity: ");
		quantity = sc.nextInt();
		// System.out.println("Enter amount: ");
		// amount = sc.nextInt();
	}
	void display_info(){
		super.display_info();
		System.out.println("Product price is: "+price);
		System.out.println("Product quantity is: "+quantity);
		JOptionPane.showMessageDialog(null,"Amount is: "+ (price*quantity),"Total Amount",JOptionPane.INFORMATION_MESSAGE);
		// System.out.println("Total amount is: "+amount);
	}
}
class code{
	public static void main(String[] args) {
		Product_Info info = new Product_Info();
		info.getInfo();
		info.display_info();
	}
}
