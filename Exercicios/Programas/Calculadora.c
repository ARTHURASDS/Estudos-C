#include <stdio.h>
#include <stdlib.h>

int main() {

  double valor1, valor2;
  char operador;

  printf("Informe a operação matemática: + - / * \n");
  scanf("%c", &operador);

  printf("Digite o primeiro valor: \n");
  scanf("%lf", &valor1);

  printf("Digite o segundo valor: \n");
  scanf("%lf", &valor2);

  if (operador == '+') {
    printf(valor1 + valor2);
  } else if (operador == '-') {
    printf(valor1 - valor2);
  } else if (operador == '/') {
    printf(valor1 / valor2);
  } else
    (operador == '*') { printf(valor1 * valor2); }
  return 0;
}