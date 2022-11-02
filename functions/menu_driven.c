#include<stdio.h>
//menu driven by function calling.
void addition(){
    int a,b;
    printf("Enter a and b: \n");
    scanf("%d %d", &a,&b);
    int sum=a+b;
    printf("Addition of %d and %d: %d\n", a,b,sum);
}
void subtract(){
    int a,b;
    printf("Enter a and b: \n");
    scanf("%d %d", &a,&b);
    int subtraction=a-b;
    printf("Subtraction of %d and %d: %d\n", a,b,subtraction);
}
void divide(){
    int a,b;
    printf("Enter a and b: \n");
    scanf("%d %d", &a,&b);
    int division=a/b;
    printf("division of %d and %d: %d\n", a,b,division);
}
void multiply(){
    int a,b;
    printf("Enter a and b: \n");
    scanf("%d %d", &a,&b);
    int Multiplication=a*b;
    printf("Multiplication of %d and %d: %d\n", a,b,Multiplication);
}

int main(){
    int choice;
    printf("1- Addition\n");
    printf("2- Subtraction\n");
    printf("3- Multiplication\n");
    printf("4- Division\n");
    printf("Enter your choice: \n");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            addition();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        default:
            printf("Enter 1 or 2 or 3 or 4\n");
    }

    return 0;
}
