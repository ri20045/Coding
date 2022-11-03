#include<stdio.h>
//to check whether no. is armstrong or not
int main(){
    int n,rem,sum=0;
    
    printf("Enter n: \n");
    scanf("%d", &n);
    int temp=n;
    while(n>0){
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
   }
   printf("Sum is: %d\n", sum);
   printf("n : %d\n",temp);
   if(temp==sum){
    printf("Yes %d is an armstrong no.", temp);
   }
   else{
    printf("No %d is not an armstrong no.",temp);
   }
    return 0;
}
