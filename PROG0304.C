#include <stdio.h>

main()
{
float salario;
printf("Qual o Sal�rio ");
scanf("%f", &salario);
if (salario < 100000)
  salario = salario +1000;
printf("Sal�rio Final: %.2f\n",salario);
}
