#include <iostream>
using namespace std;

class Animal{
  public:
    void comer(){
      cout << "El animal come"<< endl;
    }
    void dormir(){
      cout << "El animal duerme"<< endl;
    }
};

class Perro: public Animal{
  public:
    void ladrar(){
      cout << "Perro ladra"<< endl;
    }
};

int main(){
  Perro perro1;
  perro1.ladrar();

  return 0;
}
