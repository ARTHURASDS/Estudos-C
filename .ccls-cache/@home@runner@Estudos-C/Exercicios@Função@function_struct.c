#include <locale.h>
#include <stdio.h>
#include <string.h>

oid imprime(int *v, int n);

int main() {
  int vet[5] = [ 1, 2, 3, 4, 5 ];

  puts("Primeiro imprime: \n");
  imprime(vet, 5);
}

void imprime3(int *v, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", v[i]);
  }
}