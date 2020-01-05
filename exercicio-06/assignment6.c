#include <stdio.h>


int main(void)
{
  int numerator, denominator;
  printf("Digite o numerador: ");
  scanf("%d", &numerator);
  printf("Digite o denominador: ");
  scanf("%d", &denominator);

  if (numerator % denominator == 0)
  {
  	printf("Não há resto na fração!");
  }
  else
  {
  	printf("Há resto na fração!");
  }

  return 0;
}
