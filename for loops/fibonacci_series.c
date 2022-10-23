#include <stdio.h>

int main(void)
{
	int n1=0,n2=1,i,ans,N;
	printf("Enter the number=  \n");
	scanf("%d", &N);
	printf("1 ");
	for(i=1;i<=N;i++)
	{
		ans=n1+n2;
		n1=n2;
		n2=ans;
		printf("%d ", ans);
	}
	return 0;
}
