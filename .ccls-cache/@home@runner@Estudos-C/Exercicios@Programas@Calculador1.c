#include <stdio.h>
#include <stdlib.h>

int main() {

  double valor1, valor2;
  int operador;

  printf("Digite o numero associado a operação: \n");
  printf("1 - Soma");
  printf("2 - Subtração");
  printf("3 - Divisão");
  printf("4 - Mutiplicação");
  scanf("%d", &operador);

  printf("Digite o primeiro valor: \n");
  scanf("%lf", &valor1);

  printf("Digite o segundo valor: \n");
  scanf("%lf", &valor2);

  if (operador == 1) {
    printf(valor1 + valor2);
  } else if (operador == 2) {
    printf(valor1 - valor2);
  } else if (operador == 3) {
    printf(valor1 / valor2);
  } else
    (operador == 4) { printf(valor1 * valor2); }
  return 0;
}