#include <stdio.h>
#include <string.h>

struct Pessoa {
  char nome[70];
  int idade;
  float altura;
};

int main () {
  struct Pessoa rafael;

  int idade;

  
  strcpy(rafael.nome, "Rafael Vitor");

  rafael.idade = 22;
  rafael.altura = 1.75;

  printf ("O aluno %s tem %d e tem %.2f de altura.\n", rafael.nome, rafael.idade, rafael.altura);

  

  
  return 0; 
}