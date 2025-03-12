#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int main(){
  srand(time(NULL));

  int i, a, b;
  char placa[7];

  for (i=0; i<7 ; i++) {
    if (i<3) {
      // [65, 90]
      a = 65;
      b = 90;
      placa[i] = (rand() % (b - a + 1)) + a;
    } else if (i == 3){
      a = 48;
      b = 57;
      placa[i] = (rand() % (b - a + 1)) + a;
    } else if (i == 4){
      a = 65;
      b = 90;
      placa[i] = (rand() % (b - a + 1)) + a;
    } else {
      a = 48;
      b = 57;
      placa[i] = (rand() % (b - a + 1)) + a;
    }
  }
  printf("Placa: %s\n", placa);

  return 0;
}

