#include <stdio.h>

main()
{
  float salario;
  printf("Qual o sal�rio: ");
  scanf("%f",&salario);
  if (salario<=0)
	 printf("Sal�rio: Valor Inv�lido\n");
  if (salario > 1000)
	 printf("Imposto = %.2f\n",salario*0.10);
  else
	 printf("Imposto = %.2f\n",salario*0.05);
}
