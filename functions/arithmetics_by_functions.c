#include <stdio.h>

int add(int a, int b) 
{
	int sum;
	sum=a+b;
	return sum;
}
	int subtract(int a, int b) 
{
	int subtraction;
	subtraction=a-b;
	return subtraction;
}
	int multiply(int a, int b)
{
	int multiplication;
	multiplication=a*b;
	return multiplication;
}
	int divide(int a, int b) 
{
	int division;
	if(b==0){
		printf("cannot divide as remainder is 0\n");
		return 0;
	}
	division=a/b;
	return division;
}
	
	int main()
{
	int a,b;
	printf("Enter a= \n");
	scanf("%d", &a);
	printf("Enter b \n");
	scanf("%d", &b);
	printf("Addition = %d\n", add(a,b));
	printf("Subtraction = %d\n", subtract(a,b));
	printf("Multiplication = %d\n", multiply(a,b));
	printf("Division = %d\n", divide(a,b));
	return 0;
}
