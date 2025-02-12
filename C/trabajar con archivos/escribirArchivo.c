#include <stdio.h>

int main(){

  // en fopen primero el nombre del archivo luego tendras 3 opciones
  // 1. leer: r
  // 2. escripir: w
  // 3. anexar: a

  FILE *parch = fopen("alumnos.txt", "a");
  fprintf(parch,"Ramces, 100 \n");


  fclose(parch);
  return 0;
}
