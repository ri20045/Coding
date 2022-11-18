#include<stdio.h>
void factorial()
{
	int i,n, factorial=1;
    printf("Enter n: \n");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
    factorial = factorial*i;
}
    printf("Factorial of %d: %d",n,factorial);
}
void max()
{
	int n1,n2;
	printf("Enter n1 and n2 : \n");
	scanf("%d %d", &n1,&n2);
	if(n1>n2){
		printf("n1 is greater");
	}
	else{
		printf("n2 is greater");
	}

}
void perform()
{
	int n1,n2;
	printf("Enter n1 and n2 : \n");
	scanf("%d %d", &n1,&n2);
	if(n1>n2){
		int a,b;
	    printf("Enter a and b : \n");
	    scanf("%d %d", &a,&b);
		int mult=a*b;
		printf("Multiplication of a and b is : %d", mult);
	}
	else{
		int c,d;
		printf("Enter c and d : \n");
	    scanf("%d %d", &c,&d);
		int div=c/d;
		printf("Division of c and d is : %d", div);
	}
}
void EvenOrOdd()
{
	int n;
	printf("Enter n: \n");
	scanf("%d", &n);
	if(n%2==0){
		printf("n is even");
	}
	else{
		printf("odd");
	}
}
void vowel()
{
	char ch;
	printf("Enter a character: \n");
	scanf("%c", &ch);
	if(ch == 'a' || ch=='e' || ch=='i' || ch== 'o' || ch== 'u'){
		printf("vowel");
	}
	else{
		printf("constant");
	}
}
void threeMax()
{
	int a,b,c;
	printf("Enter a, b and c: \n");
	scanf("%d %d %d", &a,&b,&c);
	if(a>b && a>c){
		printf("a is greater");
	}
	else if(b>a && b>c){
		printf("b is greater");
	}
	else{
		printf("c is greater");
	}
}
void armstrong()
{
	int n;
	printf("Enter n: \n");
	scanf("%d", &n);
	int temp = n;
	int res = 0;
	while(n > 0) {
		int digit = n % 10;
		res += digit * digit * digit;
		n /= 10;
	}

	if(res == temp) {
		printf("arm");
	} 
	else {
		printf("not arm");
	}
}
int main()
{
	vowel();
	factorial();
    max();
	perform();
	EvenOrOdd();
	threeMax();
	armstrong();
	return 0;
}
