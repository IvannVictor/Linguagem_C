#include <stdio.h>
#include <stdlib.h>




void main(){
  char *a, *b;
 *a = "abacate";
 *b = "uva";
 if (strcmp(a, b) < 0 )
      printf ("%s vem antes de %s no dicion�rio \n", a, b);
 else
      printf ("%s vem depois de %s no dicion�rio \n", a, b);
      return 0;
}
