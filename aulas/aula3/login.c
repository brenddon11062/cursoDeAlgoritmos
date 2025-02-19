#include <stdio.h>

int main() {
  int cpf, senha;

  printf("Digite seu CPF: ");
  scanf("%d", &cpf);

  printf("Digite sua senha: ");
  scanf("%d", &senha);

  printf("Seu CPF é %d e sua senha é %d.\n", cpf, senha);

  return 0;
}