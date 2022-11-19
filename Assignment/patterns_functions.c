#include<stdio.h>
void pattern1(int rows)
{
	
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
void pattern2(int rows)
{
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++){
			printf("1");
		}
		printf("\n");
	}
}
void pattern3(int rows)
{
	for(int i=1;i<=rows;i++)
	{
		for(int j=(rows+1)-i;j>=1;j--){
			printf("%d", j);
		}
		printf("\n");
	}
}
void pattern4(int rows)
{
	for(int i=1;i<=rows;i++)
	{
		char start = 'A';
		for(int j=1;j<=i;j++){
			printf("%c", start);
			start++;
		}
		printf("\n");
	}
}
void pattern5(int rows)
{
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++){
			printf("%d", i);
		}
		printf("\n");
	}
}
void pattern6(int rows)
{
	char start='A';
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++){
			printf("%c", start);
		}
		start++;
		printf("\n");
	}
}
void pattern7(int rows)
{
	for(int i=1;i<=rows;i++)
	{
		for(int s=rows-i;s>=0;s--){
			printf(" ");
		}
		char start = 'A';
		for(int j=1;j<=i;j++){
			printf("%c", start);
			start++;
		}
		start--;
		start--;
		for(int k=1;k<=(i-1);k++) {
			printf("%c", start);
			start--;
		}
		printf("\n");
	}
}
void pattern8(int rows)
{
	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++){
			printf("%d", i);
		}
		printf("\n");
	}
	
}
void pattern9(int n)
{
	int start = n;
	for(int i=1;i<=n;i++) {
		for(int j=1;j<=(n-i+1);j++) {
			printf("%d", start);
		}
		start--;
		printf("\n");
	}
}
int main()
{
	int rows;
	printf("Enter number of rows: \n");
	scanf("%d", &rows);
	pattern8(rows);
	pattern9(rows-1);

	return 0;
}
