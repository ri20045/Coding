#include<stdio.h>
int main()
{
	int a,b,res=1;
	printf("Enter the number a: \n");
	scanf("%d", &a);
	printf("Enter the power b: \n");
	scanf("%d", &b);
	for(int i=1;i<=b;i++)
	{
		res*=a;
	}
	printf("%d", res);

	return 0;
}
