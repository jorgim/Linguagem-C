#include <stdio.h>

main()
{
int x;
printf("Introduza um N� ");
scanf("%d", &x);
if (x) 		/* em vez de if (x!=0) */
  printf("%d n�o � zero!!!\n",x);
else
  printf("%d � igual a zero!!!\n",x);
}
