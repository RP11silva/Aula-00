#include <stdio.h>

int main(void) {

  printf("Bom dia! Estou aprendendo a programar Definitivamente não é \"muito\" dificil\n");
  printf("Suas notas são %d e %d e sua média é %d\n", 9 , 7, (9+7) / 2);
  printf("Vamos distribuir 359 carros para 4 pessoas e portanto devem sobrar %d carros\n", 359 % 4);
  printf("Eu tenho um círculo de raio 5. \nPortanto o diâmetro é %d \nA área é %f \nE a medida da circunferência é %f",5*2, 3.14*5*5, 2*3.14*5);
  float precom2 = 10;
  int raio;
  
  printf("\nDigite o raio da piscina");
  scanf("%d", &raio);
  
  printf("Eu tenho uma piscina de raio %d\n", raio);
  printf("A área da piscina é %f\n", 3.14*raio*raio);
    printf("A circunferência da piscina é %f\n", 2*3.14*raio);
    printf("O preço será: R$%f\n", 3.14*raio*raio* precom2);
  
  
  return 0;
    
    }