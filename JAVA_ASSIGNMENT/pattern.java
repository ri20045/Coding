import java.util.*;
// 5. Write a java program to draw below pattern
// 1
// 1 2
// 1 2 3
// 1 2 3 4

class code{
    public static void main(String[] args){
        int row = 4;
        for(int i = 1;i <= row;i++){
            for(int j = 1;j <= i;j++){
                System.out.print(j+" ");
            }
            System.out.println();
        }
    }
}
