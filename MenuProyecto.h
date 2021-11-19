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
private:
  int huevos;
  float harina;
  string sabor;
  float azucar;
  float levadura;
  float mantequilla;
  float molde;

public:
  Pastel():huevos(0),harina(0.0),sabor(""),azucar(0.0),levadura(0.0),mantequilla(0.0),molde(0.0){};
  Pastel(int hue,float har,string sab,float az,float lev,float man,float mold):huevos(hue),harina(har),sabor(sab),azucar(az),levadura(lev),mantequilla(man),molde(mold){};

  int get_huevos();
  float get_harina();
  string get_sabor();
  float get_azucar();
  float get_levadura();
  float get_mantequilla();
  float get_molde();
  bool get_listo();

  void set_huevos(int );
  void set_harina(float );
  void set_sabor(string );
  void set_azucar(float );
  void set_levadura(float );
  void set_mantequilla(float );
  void set_molde(float );
  void set_listo(bool );

};

class Galleta{
private:
  int huevos;
  float harina;
  string sabor;
  string figura;
  float azucar;
  float mantequilla;
public:
  Galleta():huevos(0),harina(0.0),sabor(""),figura(""),azucar(0.0),mantequilla(0.0){};
  Galleta(int hue,float har,string sab,string fig,float az,float man):huevos(hue),harina(har),sabor(sab),figura(fig),azucar(az),mantequilla(man){};

  int get_huevos();
  float get_harina();
  string get_sabor();
  string get_figura();
  float get_azucar();
  float get_mantequilla();
  bool get_listo();

  void set_huevos(int );
  void set_harina(float );
  void set_sabor(string );
  void set_figura(string );
  void set_azucar(float );
  void set_mantequilla(float );
  void set_listo(bool );
};

class Pan{
  string tipo;
  int huevos;
  float harina;
  float levadura;
  float leche;
  float azucar;
  float mantequilla;
public:
  Pan():tipo(""),huevos(0),harina(0.0),levadura(0.0),leche(0.0),azucar(0.0),mantequilla(0.0){};
  Pan(string tip,int hue,float har,float lev,float lech,float az,float man):tipo(tip),huevos(hue),harina(har),levadura(lev),leche(lech),azucar(az),mantequilla(man){};

  string get_tipo();
  int get_huevos();
  float get_harina();
  float get_levadura();
  float get_leche();
  float get_azucar();
  float get_mantequilla();
  bool get_listo();

  void set_tipo(string );
  void set_huevos(int );
  void set_harina(float );
  void set_levadura(float );
  void set_leche(float );
  void set_azucar(float );
  void set_mantequilla(float );
  void set_listo(bool );
};

//Primer intento de creacion de herencia de la clase PastelBoda, todavia no esta terminada
class PastelBoda: public Pastel{
private:
  int pisos;
public:
  PastelBoda():pisos(0){};
  PastelBoda(int pis):pisos(pis){};

  int get_huevos();
  float get_harina();
  string get_sabor();
  float get_azucar();
  float get_levadura();
  float get_mantequilla();
  float get_molde();
  bool get_listo();
  int get_pisos();

  void set_huevos(int );
  void set_harina(float );
  void set_sabor(string );
  void set_azucar(float );
  void set_levadura(float );
  void set_mantequilla(float );
  void set_molde(float );
  void set_listo(bool );
  void set_pisos(int );
};

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
bool Pastel::get_listo(){
  return listo;
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
void Pastel::set_listo(bool lis){
  listo=lis;
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
bool Galleta::get_listo(){
  return listo;
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
void Galleta::set_listo(bool lis){
  listo=lis;
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
bool Pan::get_listo(){
  return listo;
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
void Pan::set_listo(bool lis){
  listo=lis;
}

//Funciones para pasteles de boda
//Funciones Get o getters
int PastelBoda::get_huevos(){
  return huevos;
}
float PastelBoda::get_harina(){
  return harina;
}
string PastelBoda::get_sabor(){
  return sabor;
}
float PastelBoda::get_azucar(){
  return azucar;
}
float PastelBoda::get_levadura(){
  return levadura;
}
float PastelBoda::get_mantequilla(){
  return mantequilla;
}
float PastelBoda::get_molde(){
  return molde;
}
bool PastelBoda::get_listo(){
  return listo;
}
int PastelBoda::get_pisos(){
  return pisos;
}
//Funciones set o setters
void PastelBoda::set_huevos(int hue){
  huevos=hue;
}
void PastelBoda::set_harina(float har){
  harina=har;
}
void PastelBoda::set_sabor(string sab){
  sabor=sab;
}
void PastelBoda::set_azucar(float az){
  azucar=az;
}
void PastelBoda::set_levadura(float lev){
  levadura=lev;
}
void PastelBoda::set_mantequilla(float man){
  mantequilla=man;
}
void PastelBoda::set_molde(float mold){
  molde=mold;
}
void PastelBoda::set_listo(bool lis){
  listo=lis;
}
void PastelBoda::set_pisos(int pis){
  pisos=pis;
}

#endif
#endif
#endif
