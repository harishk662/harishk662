#include <stdio.h>
 
void factorial ()
{
  int c, n, f = 1;
 
  printf("\n\nEnter a number to calculate its factorial\n");
  scanf("%d", &n);
  for (c = 1; c <= n; c++)
    f = f * c;
 
  printf("Factorial of %d = %d\n\n", n, f);
 
 //  return 0;
}
