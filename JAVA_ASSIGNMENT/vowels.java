import java.util.*;
// 19.  Write a class called code and define a static method displayWordStats( ) which displays on
// standard output the word,total no. of characters in the word and the number of vowels in the word.
class code{
    public static void main(String[] args){
        displayWordStats("Hello");
        displayWordStats("Java");
        displayWordStats("Arogramming");
    } 
    public static void displayWordStats(String word){
        int totalCharacters = word.length();
        int vowelCount = 0;
        for(char ch : word.toLowerCase().toCharArray()){
            if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                vowelCount++;
            }
        }
        System.out.println("Word: "+word);
        System.out.println("Word count: "+totalCharacters);
        System.out.println("No. of vowels: "+vowelCount);
        System.out.println();
    }
}
