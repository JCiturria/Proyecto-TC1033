/*Autor: Juan Carlos Iturria
Matricula: A01704730
TC1033, Programación Orientada a Objetos
*/
#ifndef ORDEN_H
#define ORDEN_H

#include <iostream>
#include <string>
using namespace std;
#include "MenuProyecto.h"

class Orden{
private:
  string nombre;
  int idorden;
  int numarticulos;
  string articulos;
  float precio;
public:
  Orden():nombre(""),idorden(0),numarticulos(0),articulos(""),precio(0.0){};
  Orden(string nom,int id,int num,string art,float pre):nombre(nom),idorden(id),numarticulos(num),articulos(art),precio(pre){};

  string get_nombre();
  int get_idorden();
  int get_numarticulos();
  string get_articulos();

  void set_nombre(string );
  void set_idorden(int );
  void set_numarticulos(int );
  void set_articulos(string );

  //void agregar_pastel(Pastel );
  //void agregar_pan(Pan);
  //void agregar_galleta(Galleta);
};
string Orden::get_nombre(){
  return nombre;
}
#endif
