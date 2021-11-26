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

const int PH=100;

class Orden{
private:
  string nombre;
  int idorden;
  int nump,numc,numpa,numga;
  float precio;
  PastelBoda pboda[PH];
  Cupcake cup[PH];
  Pan pan[PH];
  Galleta gal[PH];

public:
  Orden():nombre(""),idorden(0),nump(0),numc(0),numpa(0),numga(0),precio(0.0){};
  Orden(string nom,int id,float pre,int np,int nc,int npa,int ng):
  nombre(nom),idorden(id),precio(pre),nump(np),numc(nc),
  numpa(npa),numga(ng){};

  string get_nombre();
  int get_idorden();
  int get_nump();
  int get_numc();
  int get_numpa();
  int get_numga();

  void set_nombre(string );
  void set_idorden(int );
  void set_nump(int );
  void set_numc(int );
  void set_numpa(int );
  void set_numga(int );

  //Funciones para crear los articulos
  
  void agregar_pastelboda(int huevos,float harina,string sabor,float azucar,
  float levadura,float mantequilla,float molde,int pisos);

  void agregar_cupcake(int huevos,float harina,string sabor,float azucar,
  float levadura,float mantequilla,float molde,string betun);

  void agregar_galleta(int hue,float har,string sab,string fig,float az,float man);

  void agregar_pan(string tip,int hue,float har,float lev,float lech,float az,float man);

  void numero_orden(int );

};
string Orden::get_nombre(){
  return nombre;
}
int Orden::get_idorden(){
  return idorden;
}
int Orden::get_nump(){
  return nump;
}
int Orden::get_numc(){
  return numc;
}
int Orden::get_numpa(){
  return numpa;
}
int Orden::get_numga(){
  return numga;
}
//Funciones de la clase orden (Numero de orden, precio, etc.)

void Orden::numero_orden(int idorden){
  idorden=100;
  cout<<idorden;
}

//Funciones para crear Articulos
void Orden::agregar_pastelboda(int huevos,float harina,string sabor,float azucar,
float levadura,float mantequilla,float molde,int pisos){

  nump+=1;
  PastelBoda pruebap(huevos,harina,sabor,azucar,levadura,mantequilla,molde,pisos);
  pboda[nump]=pruebap;

}
void Orden::agregar_cupcake(int huevos,float harina,string sabor,float azucar,
float levadura,float mantequilla,float molde,string betun){

  numc+=1;
  Cupcake pruebac(huevos,harina,sabor,azucar,levadura,mantequilla,molde,betun);
  cup[numc]=pruebac;
}

void Orden::agregar_galleta(int hue,float har,string sab,string fig,float az,float man){

  numga+=1;
  Galleta pruebaga(hue,har,sab,fig,az,man);
  gal[numga]=pruebaga;
}

void Orden::agregar_pan(string tip,int hue,float har,float lev,float lech,float az,float man){

  numpa+=1;
  Pan pruebapa(tip,hue,har,lev,lech,az,man);
  pan[numpa]=pruebapa;
}


#endif
