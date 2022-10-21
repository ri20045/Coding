#include <stdio.h>

int main(void) {
	// Multiplication table of n
	int i,n;
	printf("Enter the number, of which you want table of = \n");
	scanf("%d", &n);
	printf("Multiplication table of %d \n", n);
	for(i=1;i<=10;i++)
	printf("%d x %d = %d \n", n,i,n*i);
	return 0;
}
