#include <stdio.h>
 
int main(void) {
	int a,i;
	printf("Enter number 'a' till where you have to print= ");
	scanf("%d", &a);
	for(i=1;i<=a;i++)
	printf("\n %d", i);
	return 0;
}
