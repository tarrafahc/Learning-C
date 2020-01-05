#include <stdio.h>


int main(void)
{
  float seconds;
  
  printf("Digite o número de segundos: ");
  scanf("%f", &seconds);

  float hours;
  float mins;
  float remaining_seconds;

  //aqui fazemos o que é chamado de "type casting", convertendo as variaveis float para inteiro
  //assim não iremos imprimir a parte decimal das horas, minutos e segundos.
  hours = (int)(seconds / 3600);
  mins = (int)((seconds - (hours * 3600))/60);  
  remaining_seconds = (seconds - (hours * 3600) - (mins * 60));

  printf("%0.0f segundos é equivalente a %0.0f horas, %0.0f minutos, e %0.0f segundos.", seconds, hours, mins, remaining_seconds);

  return 0;
}
