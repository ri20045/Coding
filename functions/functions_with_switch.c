  #include<stdio.h>
  int addition(int a, int b){
      int sum=a+b;
      return sum;
  }

  int subtraction(int a, int b){
      int sub=a-b;
      return sub;    
  }

  int main(){
      int a,b;
      printf("Enter a and b: \n");
      scanf("%d %d", &a,&b);
      int ch;
      printf("Enter your choice: \n");
      scanf("%d", &ch);

  switch(ch){
      case 1:

          printf("sum of a and b is: %d", addition(a,b));

      break;
      case 2:

          printf("subtraction of a and b is: %d",subtraction(a,b) );
      break;
      default:
      printf("Enter either 1 or 2");
  }

      return 0;
  }
