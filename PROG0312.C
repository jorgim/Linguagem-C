#include <stdio.h>

main()
{
  char Est_Civil;
  printf("Qual o estado Civil: ");
  scanf(" %c",&Est_Civil); /* ou Est_Civil = getchar(); */
  switch(Est_Civil)
	 {
		case 'C': printf("Casado\n"); break;
		case 'S': printf("Solteiro\n"); break;
		case 'D': printf("Divorciado\n"); break;
		case 'V': printf("Vi�vo\n");
                 break;
		default : printf("Estado Civil Incorrecto\n");
	 }
}
