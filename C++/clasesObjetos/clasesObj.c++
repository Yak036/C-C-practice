#include <iostream>
#include <string>

using namespace std;
class Alumnos {
  // definir atributos privados para setters y getters
  private:
    string grado;
  //definir variables publicas
  public:
    string nombre;
    // string grado;
    int edad;
    double nota;

    //El constructo se crea debajo de las variables publicas
    //Se ejecuta cada q se cree una nueva instancia del objeto
      //Esto es para poner datos por defecto
    // Alumnos(){
    //   nombre = 'Por asignar';
    //   edad = 0;
    //   nota = 0;
    // }
    Alumnos(string nombre_alumno, string grado_alumno, int edad_alumno, double nota_alumno){
      // cout << "Nuevo alumno registrado: "<< nombre_alumno << endl;
      nombre = nombre_alumno;
      definir_grado(grado_alumno);
      edad = edad_alumno;
      nota = nota_alumno;
    }

    // para declarar funciones publicas q puedan o no ser usadas
    // bool aprobado(){
    //   if (nota >= 5) {
    //     return true;
    //   }else{
    //     return false;
    //   }
    // }

    // Para crear un setter (forma de cambiar el valor de una variable privada)
    void definir_grado(string grado_alumno){
      if (grado_alumno == "Arquitectura" || grado_alumno == "Medicina" || grado_alumno == "Ingenieria") {
        grado = grado_alumno;
      }else {
        grado = "Grado incorrecto";
      }
    }

    // Para crear un getter (Forma de acceder a una variable privada);
    string obtener_grado(){
      return grado;
    }
};

int main(){
  //heredar dichas variables publicas
  Alumnos alumno1("Juan", "Medicina", 25, 6.5);
  alumno1.definir_grado("wawa");
  // alumno1.nombre = "juan";
  // alumno1.edad = 25;
  // alumno1.nota= 2.5;


  cout << alumno1.obtener_grado() << endl;
  // cout << alumno1.aprobado() << endl;
  return 0;
}
