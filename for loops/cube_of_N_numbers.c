#include <stdio.h>

int main(void) {
	// Write a program in C to display the cube of the number upto given an integer.
	int i,n,cube,a;
	printf("Enter the number of terms= \n");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		printf("Enter number a= ");
		scanf("%d", &a);
		cube=a*a*a;
		printf("Number is %d: Cube of %d is %d \n", a,a,cube);
		
	}
	return 0;
}
