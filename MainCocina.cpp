/*Autor: Juan Carlos Iturria
Matricula: A01704730
TC1033, Programación Orientada a Objetos*/

#include <iostream>
#include <string>
#include "Ordenes.h"
#include "MenuProyecto.h"
using namespace std;

void menu(){
  cout << "Menu:"<<"\n"
       << "1. Prueba 1:"<<"\n"
       << "2. Preuba 2:"<<"\n"
       << "3. Imprimir los productos:"<<"\n"
       << "4. Prueba 4:"<<"\n"
       << "5. Final:"<<endl;
}

int main(){
    int opcion=0;
  while(opcion<5&&opcion>-1){
    menu();
    cin >>opcion;
    switch (opcion){
      case 1:
      cout<<"Prueba3"<<endl;
      break;
      case 2:
      cout<<"Prueba2"<<endl;
      break;
      case 3:
      Orden orden_1("Juan Carlos",1,1,"Pan y Productos",1000.2);
          cout << orden_1.get_nombre() << endl;
       Pastel pastel_1(5,2.5,"Chocolate",5.5,6.5,3.2,1.2);
          cout<<"Pastel numero 1:"<<endl;
          pastel_1.set_molde(90.2);
          cout<< pastel_1.get_huevos()<<", "
            << pastel_1.get_harina()<<", "\
            << pastel_1.get_sabor()<<", "\
            << pastel_1.get_azucar()<<", "\
            << pastel_1.get_levadura()<<", "\
            << pastel_1.get_mantequilla()<<", "\
            <<pastel_1.get_molde()<<endl;

       Galleta galleta_1(27,4,"Vainilla","Estrella",66,90);
        cout<<"Galleta numero 1:"<<endl;
        galleta_1.set_sabor("Matcha");
        cout<< galleta_1.get_huevos()<<", "
        << galleta_1.get_harina()<<", "\
        << galleta_1.get_sabor()<<", "\
        << galleta_1.get_figura()<<", "\
        << galleta_1.get_azucar()<<", "\
        <<galleta_1.get_mantequilla()<<endl;

        Pan pan_1("Baguette",8,.01,0.2,999999,.0001,.0002);
          cout<<"Pan numero 1:"<<endl;
          pan_1.set_tipo("Croissant");
          cout<< pan_1.get_tipo()<<", "
          << pan_1.get_huevos()<<", "\
          << pan_1.get_harina()<<", "\
          << pan_1.get_levadura()<<", "\
          << pan_1.get_leche()<<", "\
          << pan_1.get_azucar()<<", "\
          <<pan_1.get_mantequilla()<<endl;
        
        }
      }
  return 0;
}
