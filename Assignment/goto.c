#include <stdio.h>
int Numbers()
{
    int i = 1;
label:
    printf("%d ",i);
    i++;
    if (i<= 10)
        goto label;
}
  
int main() {
   Numbers();
    return 0;
}
