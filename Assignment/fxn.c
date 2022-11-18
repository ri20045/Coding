#include<stdio.h>
void swap()
{
	int a, b, c;
	printf("value of a before swap : ");
	scanf("%d",&a);
	printf("value of b before swap : ");
	scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("Value of a after swap: %d\n", a);
    printf("Value of b after swap: %d\n", b);
}
void marks()
{
	float m1,m2;
	printf("Enter m1: ");
	scanf("%f",&m1);
	printf("Enter m2: ");
	scanf("%f",&m2);
    float total = m1+m2;
    float percentage = (total/200)*100;
    printf("Total percentage is : %f\n", percentage);
}
void relational()
{
	int n;
	printf("Enter a number: \n");
	scanf("%d", &n);
	if(n>=5)
	{
		printf("Person can go to school\n");
	}
}
void logical()
{
	int n;
	printf("Enter a number: \n");
	scanf("%d", &n);
	if(n>5 || n==5)
	{
		printf("taki taki rumba\n");
	}
}
void conditional()
{
	int age;
	printf("Enter age: \n");
	scanf("%d", &age);
	int isEligibleToVote = (age >= 18)? 1 : 0;
	if(isEligibleToVote == 1) {
		printf("can vote\n");
	} else {
		printf("cannot vote");
	}
}

int main()
{
	// swap();
	// marks();
	// relational();
  logical();
 //    conditional();
	return 0;
}
