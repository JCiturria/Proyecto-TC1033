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
  int nump,numc,numga,numpanes;
  float precio;
  PastelBoda pboda[PH];
  Cupcake cup[PH];
  Pan panes[PH];
  Galleta gal[PH];

public:
  Orden():nombre(""),idorden(0),nump(0),numc(0),numpanes(0),numga(0),precio(0.0){};
  Orden(string nom,int id,float pre,int np,int nc,int npa,int ng):
  nombre(nom),idorden(id),precio(pre),nump(np),numc(nc),
  numpanes(npa),numga(ng){};

  string get_nombre();
  int get_idorden();
  int get_nump();
  int get_numc();
  int get_numpanes();
  int get_numga();

  void set_nombre(string );
  void set_idorden(int );
  void set_nump(int );
  void set_numc(int );
  void set_numpanes(int );
  void set_numga(int );

  void agregar_pastelboda(int huevos,float harina,string sabor,float azucar,
  float levadura,float mantequilla,float molde,float precio,int pisos);

  void agregar_cupcake(int huevos,float harina,string sabor,float azucar,
  float levadura,float mantequilla,float molde,float precio,string betun);

  void agregar_galleta(int hue,float har,string sab,string fig,float az,
    float man,float pre);

  void agregar_pan(string tip,int hue,float har,float lev,float lech,float az,
    float man,float pre);

  void numero_orden(int );

  float precio_total();

  void muestra_pastelb();
  void muestra_cupcake();
  void muestra_galleta();
  void muestra_pan();

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
int Orden::get_numpanes(){
  return numpanes;
}
int Orden::get_numga(){
  return numga;
}
void Orden::set_nombre(string nom){
  nombre=nom;
}

//Funciones de muestra
void Orden::muestra_galleta(){
  for(int i=1;i<=numga;i++){
    cout<<gal[i].Cadena();
  }
}
void Orden::muestra_pastelb(){
  for(int i=1;i<=nump;i++){
    cout<<pboda[i].Cadena();
  }
}
void Orden::muestra_cupcake(){
  for(int i=1;i<=numc;i++){
    cout<<cup[i].Cadena();
  }
}
void Orden::muestra_pan(){
  for(int i=1;i<=numpanes;i++){
    cout<<panes[i].Cadena();
  }
}

//Funciones de la clase orden (Numero de orden, precio, etc.)

void Orden::numero_orden(int idorden){
  idorden=nump+numc+numpanes+numga+1;
  cout<<idorden;
}
void Orden::set_idorden(int id){
  idorden=id;
}

//Funcione para obtener el precio total de la orden
float Orden::precio_total(){
  int i=1;
  float total=0.0;
  for (int i;i<PH;i++) {
    total=total+gal[i].get_precio();
    total=total+pboda[i].get_precio();
    total=total+cup[i].get_precio();
    total=total+panes[i].get_precio();
  return total;
  }
}

/*total=total+pboda[i].get_precio();
total=total+cup[i].get_precio();
total=total+panes[i].get_precio();*/

//Funciones para crear Articulos
void Orden::agregar_pastelboda(int huevos,float harina,string sabor,float azucar,
float levadura,float mantequilla,float molde,float precio,int pisos){

  PastelBoda pruebap(huevos,harina,sabor,azucar,levadura,mantequilla,molde,precio,pisos);
  nump+=1;
  pboda[nump]=pruebap;
  cout<<"Precio es: "<<pruebap.get_precio()<<endl;

}

//funcion para crear cupcakes
void Orden::agregar_cupcake(int huevos,float harina,string sabor,float azucar,
float levadura,float mantequilla,float molde,float precio,string betun){

  Cupcake pruebac(huevos,harina,sabor,azucar,levadura,mantequilla,molde,precio,betun);
  numc+=1;
  cup[numc]=pruebac;
  cout<<"Precio es: "<<pruebac.get_precio()<<endl;
}

//funcion para crear las galletas
void Orden::agregar_galleta(int hue,float har,string sab,string fig,float az,float man,float pre){

  Galleta pruebaga(hue,har,sab,fig,az,man,pre);
  numga+=1;
  gal[numga]=pruebaga;
  cout<<"Precio es: "<<pruebaga.get_precio()<<endl;
}

//funcion para crear los panes
void Orden::agregar_pan(string tip,int hue, float har, float lev, float lech, float az, float man,float pre){

  Pan pruebapa(tip,hue,har,lev,lech,az,man,pre);
  numpanes+=1;
  panes[numpanes]=pruebapa;
  cout<<"Precio es: "<<pruebapa.get_precio()<<endl;
}

#endif

