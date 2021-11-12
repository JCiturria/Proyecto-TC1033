#include <iostream>
#include <string>
#include "MenuProyecto.h"
using namespace std;

int main(){
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
  return 0;
}
