import java.util.*;
public class code {
    public static void main(String[] args){
        String[] cities = {"Madras","Delhi","Ahmedabad","Calcutta","Bombay"};
        int n = cities.length;
        String temp = null;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(cities[j].compareTo(cities[i]) < 0){
                    temp = cities[i];
                    cities[i] = cities[j];
                    cities[j] = temp;
                }
            }
        }
        for(String name : cities){
            System.out.println(name);
        }
    }
}
