#include <stdio.h>
// #include <string.h>


void HolaMundo(char nombre[]){
  printf("Hola %s! \n", nombre);
}
int main(void){
  char nombre[] = "Juan";
  HolaMundo(nombre);
  return 0;
}
