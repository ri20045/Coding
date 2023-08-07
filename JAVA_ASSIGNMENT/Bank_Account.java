import java.util.*;
// Implement a Java class to represent a Bank Account with methods for deposit, withdrawal, and displaying the account balance
public class code {
    private String accountNum;
    private double balance;

    public code(String accountNum, double balance){
        this.accountNum = accountNum;
        this.balance = balance;
    }
    public void deposit(double amount){
        if(amount > 0){
            balance += amount;
            System.out.println("Deposit of "+amount+" is successful.");
        }
        else{
            System.out.println("Invalid.");
        }
    }
    public void withdrawal(double amount){
        if(amount > 0 && amount < balance){
            balance -= amount;
            System.out.println("The withdrawl of "+amount+" is successful.");
        }
        else{
            System.out.println("Invalid.");
        }
    }
    public void display(){
        System.out.println("Acoount number: "+accountNum);
        System.out.println("Balance is: "+balance);
    }
    public static void main(String[] args) {
        code c = new code("12345679",40000.0);
        c.display();
        c.deposit(20000.0);
        c.withdrawal(10000.0);
        c.display();
    }
}
