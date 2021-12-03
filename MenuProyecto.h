/*Autor: Juan Carlos Iturria
Matricula: A01704730
TC1033, Programación Orientada a Objetos

Descripcion:Documento que contiene las clases de los platillos de las cocicnas, junto con sus metodos y Atributos

*/
#ifndef PASTEL_H
#define PASTEL_H
#ifndef PAN_H
#define PAN_H
#ifndef GALLETA_H
#define GALLETA_H
#include <iostream>
using namespace std;

class Pastel{
protected:
  int huevos;
  float harina;
  string sabor;
  float azucar;
  float levadura;
  float mantequilla;
  float molde;
  float precio;

public:
  Pastel():huevos(0),harina(0.0),sabor(""),azucar(0.0),levadura(0.0),
  mantequilla(0.0),molde(0.0),precio(0.0){};
  Pastel(int hue,float har,string sab,float az,float lev,float man,float mold,
    float pre):
  huevos(hue),harina(har),sabor(sab),azucar(az),levadura(lev),mantequilla(man),
  molde(mold),precio(pre){};

  int get_huevos();
  float get_harina();
  string get_sabor();
  float get_azucar();
  float get_levadura();
  float get_mantequilla();
  float get_molde();
  float get_precio();

  void set_huevos(int );
  void set_harina(float );
  void set_sabor(string );
  void set_azucar(float );
  void set_levadura(float );
  void set_mantequilla(float );
  void set_molde(float );
  void set_precio(float );
};

class Galleta{
private:
  int huevos;
  float harina;
  string sabor;
  string figura;
  float azucar;
  float mantequilla;
  float precio;

public:
  Galleta():huevos(0),harina(0.0),sabor(""),figura(""),azucar(0.0),
  mantequilla(0.0),precio(0.0){};
  Galleta(int hue,float har,string sab,string fig,float az,float man,float pre):
  huevos(hue),harina(har),sabor(sab),figura(fig),azucar(az),mantequilla(man),precio(pre){};

  int get_huevos();
  float get_harina();
  string get_sabor();
  string get_figura();
  float get_azucar();
  float get_mantequilla();
  float get_precio();

  void set_huevos(int );
  void set_harina(float );
  void set_sabor(string );
  void set_figura(string );
  void set_azucar(float );
  void set_mantequilla(float );
  void set_precio(float );

  string Cadena();
};

class Pan{
private:
  string tipo;
  int huevos;
  float harina;
  float levadura;
  float leche;
  float azucar;
  float mantequilla;
  float precio;
public:
  Pan():tipo(""),huevos(0),harina(0.0),levadura(0.0),leche(0.0),azucar(0.0),
  mantequilla(0.0),precio(0.0){};
  Pan(string tip,int hue,float har,float lev,float lech,float az,float man,float pre):
  tipo(tip),huevos(hue),harina(har),levadura(lev),leche(lech),azucar(az),
  mantequilla(man),precio(pre){};

  string get_tipo();
  int get_huevos();
  float get_harina();
  float get_levadura();
  float get_leche();
  float get_azucar();
  float get_mantequilla();
  float get_precio();

  void set_tipo(string );
  void set_huevos(int );
  void set_harina(float );
  void set_levadura(float );
  void set_leche(float );
  void set_azucar(float );
  void set_mantequilla(float );
  void set_precio(float );

  string Cadena();
};

class PastelBoda: public Pastel{
private:
  int pisos;
public:
  PastelBoda():pisos(0),Pastel(){};
  PastelBoda(int hue,float har,string sab,float az,float lev,float man,float mold,float pre,int pis)
  :pisos(pis),Pastel(hue, har, sab, az,lev,man,mold,pre){};
  int get_pisos();

  void set_pisos(int );
  string Cadena();
};

class Cupcake: public Pastel{
private:
  string betun;
public:
  Cupcake():betun(""),Pastel(){};
  Cupcake(int hue,float har,string sab,float az,float lev,float man,float mold,float pre,string bet)
  :betun(bet),Pastel(hue, har, sab, az,lev,man,mold,pre){};
  string get_betun();

  void set_betun(string );
  string Cadena();
};

string PastelBoda::Cadena(){
  stringstream pruebap;
  pruebap << "Pastel sabor: " << sabor << " con numero de pisos: "<< pisos << "\n";
  return pruebap.str();
}
string Cupcake::Cadena(){
  stringstream pruebac;
  pruebac << "Cupcake sabor: " << sabor << " con betun de: "<< betun << "\n";
  return pruebac.str();
}
string Galleta::Cadena(){
  stringstream pruebaga;
  pruebaga << "Galleta sabor: " << sabor << " con figura: "<< figura << "\n";
  return pruebaga.str();
}
string Pan::Cadena(){
  stringstream pruebapa;
  pruebapa << "Pan tipo: " << tipo << "\n";
  return pruebapa.str();
}


//Funciones para pasteles
//Funciones Get o getters
int Pastel::get_huevos(){
  return huevos;
}
float Pastel::get_harina(){
  return harina;
}
string Pastel::get_sabor(){
  return sabor;
}
float Pastel::get_azucar(){
  return azucar;
}
float Pastel::get_levadura(){
  return levadura;
}
float Pastel::get_mantequilla(){
  return mantequilla;
}
float Pastel::get_molde(){
  return molde;
}
float Pastel::get_precio(){
  return precio;
}

//Funciones set o setters
void Pastel::set_huevos(int hue){
  huevos=hue;
}
void Pastel::set_harina(float har){
  harina=har;
}
void Pastel::set_sabor(string sab){
  sabor=sab;
}
void Pastel::set_azucar(float az){
  azucar=az;
}
void Pastel::set_levadura(float lev){
  levadura=lev;
}
void Pastel::set_mantequilla(float man){
  mantequilla=man;
}
void Pastel::set_molde(float mold){
  molde=mold;
}
void Pastel::set_precio(float pre){
  precio=pre;
}

//Funciones para galletas
//Funciones Get o getters
int Galleta::get_huevos(){
  return huevos;
}
float Galleta::get_harina(){
  return harina;
}
string Galleta::get_sabor(){
  return sabor;
}
string Galleta::get_figura(){
  return figura;
}
float Galleta::get_azucar(){
  return azucar;
}
float Galleta::get_mantequilla(){
  return mantequilla;
}
float Galleta::get_precio(){
  return precio;
}

//Funciones Set o setters
void Galleta::set_huevos(int hue){
  huevos=hue;
}
void Galleta::set_harina(float har){
  harina=har;
}
void Galleta::set_sabor(string sab){
  sabor=sab;
}
void Galleta::set_figura(string fig){
  figura=fig;
}
void Galleta::set_azucar(float az){
  azucar=az;
}
void Galleta::set_mantequilla(float man){
  mantequilla=man;
}
void Galleta::set_precio(float pre){
  precio=pre;
}

//Funciones para Pan
//Funciones get o getters
string Pan::get_tipo(){
  return tipo;
}
int Pan::get_huevos(){
  return huevos;
}
float Pan::get_harina(){
  return harina;
}
float Pan::get_levadura(){
  return levadura;
}
float Pan::get_leche(){
  return leche;
}
float Pan::get_azucar(){
  return azucar;
}
float Pan::get_mantequilla(){
  return mantequilla;
}
float Pan::get_precio(){
  return precio;
}

//Funciones Set o setters
void Pan::set_tipo(string tip){
  tipo=tip;
}
void Pan::set_huevos(int hue){
  huevos=hue;
}
void Pan::set_harina(float har){
  harina=har;
}
void Pan::set_levadura(float lev){
  levadura=lev;
}
void Pan::set_leche(float lech){
  leche=lech;
}
void Pan::set_azucar(float az){
  azucar=az;
}
void Pan::set_mantequilla(float man){
  mantequilla=man;
}
void Pan::set_precio(float pre){
  precio=pre;
}

//Funciones para pasteles de boda
//Funciones Get o getters
int PastelBoda::get_pisos(){
  return pisos;
}
//Funciones set o setters
void PastelBoda::set_pisos(int pis){
  pisos=pis;
}

//Funciones para cupcakes
//Funciones Get o getters
string Cupcake::get_betun(){
  return betun;
}
//Funciones set o setters
void Cupcake::set_betun(string bet){
  betun=bet;
}

#endif
#endif
#endif

