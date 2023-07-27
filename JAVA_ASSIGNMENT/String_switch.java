import java.util.*;
// 6. Write a java program to create a class code and enter your choice to print 
// M- Mumbai
// D- Delhi
// A- Ahmedabad
// C- Calcutta

class code{
    public static void main(String[] args){
       Scanner sc = new Scanner(System.in);
       System.out.println("Enter your choice:");
       System.out.println("M - Mumbai");
       System.out.println("U - Uttarakhand");
       System.out.println("A - Ahmedabad");
       System.out.println("C - Calcutta");
       String choice = sc.next();
       switch(choice){
        case "M":
        System.out.println("Mumbai");
        break;
        case "U":
        System.out.println("Uttarakhand");
        break;
        case "A":
        System.out.println("Ahmedabad");
        break;
        case "C":
        System.out.println("Calcutta");
        break;
        default:
        System.out.println("Inavalid");
       }
    }
}
