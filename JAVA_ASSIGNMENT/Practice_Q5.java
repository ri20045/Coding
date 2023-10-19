import java.util.*;

/*Calculate area of Rectangle, Square and Triangle according to choice from user 
using function overloading concept.
Formula : Rectangle area = l * w 
Squre area =a * a
Triangle area = 1/2 * b * h*/

class code{
	static int calculateArea(int length, int breadth){
		return length*breadth;
	}
	static int calculateArea(int side){
		return side*side;
	}
	static void calculateArea(){
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter base: ");
		double base = sc.nextInt();
		System.out.println("Enter height: ");
		double height = sc.nextInt();
		double area = 0.5*(base*height);
		System.out.println("Area of triangle is: "+area);
	}
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter length: ");
		int length = sc.nextInt();
		System.out.println("Enter breadth: ");
		int breadth = sc.nextInt();
		System.out.println("Area of rectangle is: "+calculateArea(length,breadth));

		System.out.println("Enter side: ");
		int side = sc.nextInt();
		System.out.println("Area of square is: "+calculateArea(side));

		calculateArea();

	}
}
