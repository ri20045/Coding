#include <stdio.h>
/*
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
*/
int main(void) {
	int rows;
	printf("Enter number of rows: \n");
	scanf("%d", &rows);
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
	return 0;
}
