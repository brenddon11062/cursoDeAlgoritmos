#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  
  int i, a, b;
  srand(time(NULL));

  int numeroDeVacasAbduzidas;

  a = 0;
  b = 5;
  // intervalo [a, b]
  numeroDeVacasAbduzidas = (rand() % (b-a)) + a;

  printf("O número de vacas a serem abduzidas é: %d\n", numeroDeVacasAbduzidas);

  i=0;
  while (i < numeroDeVacasAbduzidas){
    printf("Vaca número %d abduzida, faltam %d vacas\n", i, numeroDeVacasAbduzidas - i);
    i++;
  }
  
  return 0;
}