#include <iostream>
// #include <stdio.h>

using namespace std;

int main() {
  int edad;
  string nombre;
  cout << "Introduce tu edad: ";
  //Declarar la variable donde se almacena el valor recibido despues del cin

  cin >> edad; //sirve para obtener 1 unica letra o varios numeros

  getline(cin, nombre); // sirve para obtener varias letras
  cout << "Tu tienes: " << edad << endl;
  return 0;
}
