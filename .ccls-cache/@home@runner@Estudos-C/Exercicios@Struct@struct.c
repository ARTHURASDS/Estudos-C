#include <locale.h>
#include <stdio.h>
#include <string.h>

#define TAM 50

struct pessoa {
  int idade;
  float peso;
  char nome[TAM];
};

typedef struct pessoa pessoa;

int main() {
  setlocale(LC_ALL, "Portuguese");

  // Criando e inicializando
  pessoa pes = {0, 0.0, "Testando123"};

  printf("Inicio:\n\n");
  printf("pes.idade: %d\n\n", pes.idade);
  printf("pes.peso: %f\n\n", pes.peso);
  printf("pes.nome: %s\n\n", pes.nome);

  // Atribuindo Valores aos campos
  pes.idade = 15;
  pes.peso = 86;
  strcpy(pes.nome, "Alterando123");

  printf("\n\nAlterei os campos via código:\n\n");
  printf("pes.idade: %d\n\n", pes.idade);
  printf("pes.peso: %f\n\n", pes.peso);
  printf("pes.nome: %s\n\n", pes.nome);

  // Solicitando inserções via teclado

  printf("\n\nAgora irei alterar valores do struct via usuário \n\n");
  printf("Insira uma idade: \n\n");
  scanf("%d", &pes.idade);
  printf("Insira um peso: \n\n");
  scanf("%f", &pes.peso);
  printf("Insira um nome: \n\n");
  scanf("%s", pes.nome);

  // Mostrando entrada de dados do usuário:

  printf("\n\nMostrando a seguir a entrada de dados do usuário! \n\n");
  printf("pes.idade: %d\n\n", pes.idade);
  printf("pes.peso: %f\n\n", pes.peso);
  printf("pes.nome: %s\n\n", pes.nome);
}