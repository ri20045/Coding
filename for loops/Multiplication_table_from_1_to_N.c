#include <stdio.h>

int main(void) {
	int i,j,n1,n2;
	printf("Enter n1= \n");
	scanf("%d", &n1);
	printf("Enter n2= \n");
	scanf("%d", &n2);
	for(i=1;i<=10;i++)
	{
		for(j=n1;j<=n2;j++)
		{
			printf("%d X %d = %d", j,i,j*i);
		}
		printf("\n");
	}
	return 0;
}
