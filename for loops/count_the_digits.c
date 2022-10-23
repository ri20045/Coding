#include <stdio.h>

int main(void) {
	int i,count,n,lastdigit;
	printf("Enter the number= \n");
	scanf("%d", &n);
	while(n>0)
	{
		lastdigit = n%10;
		n = n/10;
		count++;
	}
	printf("the number of digits are= %d", count);
	return 0;
}
