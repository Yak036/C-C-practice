#include <stdio.h>

int main(){
//Cada variable se guarda en un espacio de moemoria distinto
  int entero = 5;
  float decimal = 5.4;
  char letra = 'A';

  printf("Valor de variable: %d \n", entero);
  printf("Direccion de memoria: %p \n", (void*)&entero);
  return 0;
}
