//Codigo para calcular tiempo de certificacion
//Gerardo Mtz
//19 de agosto 2022
//V 1

//Bibliotecas
#include <stdio.h>


int main(void) {
  //Variables
  int Tcert = 60;
  int Tdedicado;
  float Trequerido;
  
  //Ingresar los valores
  printf("Ingresa el tiempo a estudiar en minutos\n");
  scanf("%d", &Tdedicado);

  //Operacion 
  Trequerido = Tcert*60/Tdedicado;

  //Imprimir resultados
  printf("Se requieren %f dias para obtener el certificado");
  
  return 0;
}