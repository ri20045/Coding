import java.util.*;
class code{
    public static void main(String[] args){
        int b1,b2;
        int i=0, carry=0;
        int[] sum = new int[10];
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter first binary number: ");
        b1 = sc.nextInt();
        System.out.println("Enter second binary number: ");
        b2 = sc.nextInt();
        while(b1!=0 || b2!=0){
            sum[i++]=((b1%10+b2%10+carry)%2);
            carry=((b1%10+b2%10+carry)/2);
            b1=b1/10;
            b2=b2/10;
        }
        if(carry != 0){
            sum[i++] = carry;
        }
        --i;
        System.out.print("Addition: ");
        while(i>=0){
            System.out.print(sum[i--]);
        }
        System.out.print("\n");
    }
}
