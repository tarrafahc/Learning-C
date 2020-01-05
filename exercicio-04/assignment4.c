#include <stdio.h>

//define um valor para PI
#define PI 3.14

int main(void)
{
  float radius;

  printf("Digite a área do seu círculo: ");
  scanf("%f", &radius);

  float area = PI * (radius * radius);

  printf("A área do seu círculo é: %f", area);
}
