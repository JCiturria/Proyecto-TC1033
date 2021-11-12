/*Autor: Juan Carlos Iturria
Matricula: A01704730
TC1033, Programación Orientada a Objetos

Descripcion:Documento que contiene las clases de los platillos de las cocicnas, junto con sus metodos y Atributos

*/
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

  void set_huevos(int );
  void set_harina(float );
  void set_sabor(string );
  void set_azucar(float );
  void set_levadura(float );
  void set_mantequilla(float );
  void set_molde(float );

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

  void set_huevos(int );
  void set_harina(float );
  void set_sabor(string );
  void set_figura(string );
  void set_azucar(float );
  void set_mantequilla(float );
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

  void set_tipo(string );
  void set_huevos(int );
  void set_harina(float );
  void set_levadura(float );
  void set_leche(float );
  void set_azucar(float );
  void set_mantequilla(float );
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
