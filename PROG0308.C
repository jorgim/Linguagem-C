#include <stdio.h>

main()
{
  int a,b;
  printf("Introduza dois n�s: ");
  scanf("%d%d",&a,&b);
  if (a >= 0)
	 if (b > 10)
	    printf("B � muito grande\n");
  else
	 printf("A tem um valor negativo\n");
}
