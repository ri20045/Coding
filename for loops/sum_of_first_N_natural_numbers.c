#include <stdio.h>

int main(void) {
	// Sum of first n natural numbers
	int i,n,sum=0;
	printf("Enter number n to add");
	scanf("\n %d", &n);
	for(i=1;i<=n;i++)
	sum=sum+i;
	printf("\n sum of n numbers is= %d ", sum);
	return 0;
}
