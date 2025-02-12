#include <stdio.h>

int main(){
//Punteros: Variables en las cuales puedo almacenar espacio de memoria especifico
//1. debes crear la variable y posteriormente su puntero
  int entero = 5;
//2. usas el * para declarar la variable de puntero
  int *pEntero = &entero;

  float decimal = 5.4;
  float *pDecimal = &decimal;

  char letra = 'A';
  char *pLetra = &letra;

  // Para acceder al valor de un puntero colocas un * antes de la varieble
  printf("Valor de variable: %d \n", entero);
  printf("Direccion de memoria: %d \n", *pEntero);
  return 0;
}
