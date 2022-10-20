#include <stdio.h>

int main(void) {
	// Write a program in C to read 10 numbers from keyboard and find their sum and average. 
int n,sum = 0,i,a;
printf("Enter the number n\n");
scanf("%d", &n);
for(i=1;i<=n;i++) {
	printf("Enter the number a= \n");
	scanf("%d\n", &a);
	sum=sum+a;
}

printf("sum of %d numbers is = %d", n,sum);
	return 0;
}

