#include <stdio.h>

int main(void) {
  // Para definir variables sigue estos pasos
  // 1. el tipo de la variable
  //    - char para letras
  //    - int para numeros
  // 2. nombre de la varieble
  // 3. numero de caracteres q tendra, en caso de no saber colocar array
  char nombre[] = "Diosmio";
  //Con los numeros no hace falta declarar el numero de caracteres
  int edad = 18;

  // int edad_siguiente = 18 + 1;

  printf("Me llamo %s y tengo %d \n", nombre, edad);
  printf("Tengo %d y me llamo %s \n", edad, nombre);
  edad = edad + 1;
  printf("El siguiente anio tendre %d \n", edad);
  return 0;
}
