#include <stdio.h>
// #include <string.h>


int cubo(int numero){
  int resultado = numero * numero * numero;
  return resultado;
}
int main(void){
  printf("%d", cubo(2));
  return 0;
}
