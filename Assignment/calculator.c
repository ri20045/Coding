#include<stdio.h>
int main(){
    while(1){
        char ch;
        int a,b;
        printf("INSTRUCTIONS\n");
        printf("1-press + for addition\n");   
        printf("2-press - for subtraction\n");
        printf("3-press * for multiplication\n");
        printf("4-press / for division\n");
        printf("5-press E to exit\n");
        printf("Enter a: \n");
        scanf("%d",&a);
        printf("Enter b: \n");
        scanf("%d",&b);
        printf("Enter operator: \n");
        scanf(" %c", &ch);
        int sum,multi,sub,div;
        switch(ch){
            case '+':
                sum=a+b;
                printf("addition is: %d", sum);
                break;
            case '-':
                sub=a-b;
                printf("subtraction is: %d", sub);
                break;
            case '*':
                multi=a*b;
                printf("multiplication is: %d", multi);
                break;
            case '/':
                div=a/b;
                printf("division is: %d", div);
                break;
            case 'E':
                return 0;
                break;
            default:
                printf("Refer instructions");
        }
    }
    
     return 0;
    
}
