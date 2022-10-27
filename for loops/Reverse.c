#include <stdio.h>

int main(void) {
	int n, reverse=0;
	printf("Enter the n =  \n");
	scanf("%d" , &n);
	printf("n before reverse is = %d \n", n);
	while(n>0){
	reverse = reverse * 10 + n % 10;
        n = n / 10;
	}
	printf("n after reverse is = %d", reverse);
	return 0;
}
