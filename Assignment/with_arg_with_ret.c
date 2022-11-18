#include<stdio.h>
int armstrong(int n)
{
	int res = 0;
	while(n > 0){
		int digit = n % 10;
    	res += (digit * digit * digit);
    	n /= 10;
	}
	return res;
}

int main()
{
	int n, res;
	printf("Enter n: \n");
	scanf("%d", &n);
	res = armstrong(n);
	if(res == n) {
		printf("arm");
	} 
	else {
		printf("not arm");
	}
	return 0;
}
