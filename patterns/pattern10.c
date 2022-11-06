#include<stdio.h>
/*
        1
      2 3 2 
    3 4 5 4 3 
  4 5 6 7 6 5 4 
5 6 7 8 9 8 7 6 5 
*/
int main() {
  int n;
  scanf("%d",&n);
  for (int i = 1; i <= n; i++) {

    for (int j = 1; j <= n - i; j++) {
      printf("  ");
    }
    for (int j = i; j < 2 * i; j++) {
      printf("%d ", j);
    }

    int k = 2 * (i - 1);
    for (int j = 1; j <= i - 1; j++) {
      printf("%d ", k--);
    }

    printf("\n");
  }
  return 0;
}
