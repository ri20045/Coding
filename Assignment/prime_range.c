#include<stdio.h>
int prime(int n)
{
	if(n==1){
		return 0;
	}
	for(int i=2;i<=n-1;i++){
		if(n%i==0){
			return 0;
		}
	}
	
	return 1;
}
int main()
{
	int n1,n2,n;
	printf("Enter n1: \n");
	scanf("%d", &n1);
	printf("Enter n2: \n");
	scanf("%d", &n2);

	for(int i=n1;i<=n2;i++){
		int res=prime(i);
		if(res==1){
			printf("%d ", i);
		}
	}
	
	

	return 0;
}
