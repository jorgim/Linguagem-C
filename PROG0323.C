#include <stdio.h>
main()
{
  int ano;
  printf("Introd. um Ano�: ");scanf("%d",&ano);
  if (ano%4 == 0)
	 printf("Ano � Bissexto\n");
  else
	 printf("Ano n�o � Bissexto\n");
}
