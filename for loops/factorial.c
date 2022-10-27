#include <stdio.h>

int main(void) {
	int n,i,factorial=1;
	printf("Enter the number n= \n");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++){
		factorial=factorial*i;
		}
	printf("factorial of %d is = %d",n, factorial);
	return 0;
}
