#include <stdio.h> 

int main() {
  int tati, matheus, rafael, isabele;

  printf("Digite a idade da Tati: ");
  scanf("%d", &tati);

  printf("Digite a idade do Matheus: ");
  scanf("%d", &matheus);

  printf("Digite a idade do Rafael; ");
  scanf("%d", &rafael);

  printf("Digite a idade da Isabele: ");
  scanf("%d", &isabele);

  float idadeMedia;

  idadeMedia = (tati + matheus + rafael + isabele) /4.0;

  printf("A idade média da turma é %.2f anos.\n", idadeMedia);


  return 0;
}