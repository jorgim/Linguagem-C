#include <stdio.h>

main()
{
  float salario,taxa;
  printf("Qual o sal�rio: ");
  scanf("%f",&salario);
  if (salario < 1000)
	 taxa = .05;
  else
	 if (salario < 5000)
		taxa = .11;
	 else
		taxa = .35;

  printf("Sal�rio: %.2f Imposto: %.2f L�quido: %.2f\n",
		     salario, salario*taxa, salario*(1.0-taxa));
}

