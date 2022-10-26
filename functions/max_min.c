#include <stdio.h>


int max(int num1, int num2);
int min(int num1, int num2);



int main() 
{
    int num1, num2, maximum, minimum;
    
   
    printf("Enter any two numbers: \n");
    scanf("%d %d", &num1, &num2);
    
    printf("Maximum = %d\n", max(num1, num2));
    printf("Minimum = %d\n", min(num1, num2));
    
    return 0;
}



int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}


int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}
