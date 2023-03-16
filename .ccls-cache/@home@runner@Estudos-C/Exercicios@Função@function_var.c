#include <locale.h>
#include <stdio.h>
#include <string.h>

float maior(float num1, float num2);

int main() {

  float valor1, valor2, m;
  printf("Insira o primeiro valor: \n");
  scanf("%f", &valor1);
  printf("Insira o segundo valor: \n");
  scanf("%f", &valor2);

  m = maior(valor1, valor2);

  printf("O maior valor foi: %.2f\n", m);
}

float maior(float num1, float num2) {
  if (num1 > num2)
    return num1;
  else
    return num2;
}
