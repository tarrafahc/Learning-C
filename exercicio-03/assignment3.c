#include <stdio.h>

int main(void)
{
  char first[20];
  char last[20];

  //pede o nome e sobrenome para o usuário, e usa scanf para armazenar nas variáveis instanciadas
  printf("Insira o seu nome: ");
  scanf("%s", &first);
  printf("Insira o seu sobrenome: ");
  scanf("%s", &last);

  printf("Olá %s %s!\n", first, last);
}
