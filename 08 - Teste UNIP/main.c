#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a=15;
    int b=2;
    b*=a;
    printf("%d %d\n",a, b);
    b=a--;
    printf("%d %d\n",a, b);


    return 0;
}
