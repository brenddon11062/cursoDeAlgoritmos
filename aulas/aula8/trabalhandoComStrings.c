#include <stdio.h>
#include <string.h>

int main () {

  // part 1
  char nome1[] = "Rafael Vitor";
  // char nome2[8]; //errado. Não considera o espaço necessario para o \0
  char nome2[9];
  strcpy(nome2, "Brenddon");
  printf("Nome2: %s\n", nome2);

  // part2
  char nome3[30];
  //printf("Nome incluido: ");
  // usando apenas para incluir strings sem espaços
  // scanf("%s", nome3);
  // printf("\nNome: %s\n", nome3);

  //jeito certo
  //fgets(nome3, 30, stdin);
  //printf("\nNome: %s\n", nome3);


  // part - capturando o tamanho da string
  // printf("O nome do %s tem %d caracteres.\n", nome3, strlen(nome3));
  char nome4[50];
  strcpy(nome4, "Matheus Moreira ");
  // printf("\nNome4: %s\n", nome4);

  printf("\nNome dos alunos: %s.\n", strcat(nome4, nome1));

  return 0;
}