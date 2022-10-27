void main()
{
	int a,b;
	printf("Enter the value of a and b\n");
	scanf("%d %d", &a,&b);
	sum(a,b);
}
void sum(int x, int y)
{
	int z;
	z=x+y;
	printf("Sum of a and b is = %d", z);
}
