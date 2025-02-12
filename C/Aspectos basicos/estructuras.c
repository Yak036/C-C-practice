#include <stdio.h>
#include <string.h>
// Se usan para permitir q una funcion tenga varios tipos de variables
struct alumnos {
  char nombre[30];
  int edad;
  double nota;
};

int main(void){
  struct alumnos alumno1;
  alumno1.edad = 21;
  alumno1.nota = 7.2;
  strcpy(alumno1.nombre, "Juan");

  struct alumnos alumno2;
  alumno2.edad = 21;
  alumno2.nota = 7.2;
  strcpy(alumno2.nombre, "Juan");


  printf("%d", alumno1.edad);
  return 0;
}
