#include <stdio.h>

int main(void) {
  
// Entrada de dados
  
  int entradaHomem = 20;
  int entradaMulher = 17;
  int homens, mulheres;
    
    printf("Quantas mulheres foram?");
    scanf("%d", &mulheres);
    printf("Quantos homens foram?");
    scanf("%d", &homens);  
  // Processamento de dados
  int valorhomens = entradaHomem * homens;
  int valormulheres = entradaMulher * mulheres;  
  int total = valorhomens + valormulheres;
  // Saída de dados
  printf("O valor total arrecadado foi de: R$ %d", total);
  
  
  return 0;
    
    }