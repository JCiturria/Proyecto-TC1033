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
       << "1. Crear Orden:"<<"\n"
       << "2. Hacer Pastel de Boda:"<<"\n"
       << "3. Hacer Cupcakes:"<<"\n"
       << "4. Hacer Galleta:"<<"\n"
       << "5. Hacer Pan:"<<"\n"
       << "6. Mostrar Orden:"<<"\n"
       << "7. Terminar:"<<endl;
}

int main(){
  cout<<"Juan Carlos Iturria A01704730"<<endl;
  cout<<"Panaderia de Objetos"<<endl;
  cout<<"Bienvenido a la panaderia!!! Utiliza este programa para crear una orden"
  " y asignar productos a ella"<<endl;
  int temp_huevos=0,temp_pisos=0,id=0,id0;
  float temp_harina=0.0,temp_azucar=0.0,temp_levadura=0.0,temp_mantequilla=0.0,
  temp_molde=0.0,temp_leche=0.0,temp_precio=0.0;
  string temp_sabor="",temp_betun="",temp_tipo="",temp_figura="",temp_nombre="";
  int opcion=0;
  //se crea una orden vacia para que funcione el prgrama
  Orden orden1("No hay orden",0,0,0,0,0,0.0);
  while(opcion<7&&opcion>-1){
    menu();
    cin >>opcion;
    switch (opcion){
      case 1:{
        cout<<"Pon el nombre de la orden (sin espacios): ";
        cin >>temp_nombre;
        cout<<"El numero de la orden es: "<<"\n";
        orden1.numero_orden(id);cout<<"\n";
        cout<<"Tu precio es: "<<endl;
        cout<<orden1.precio_total()<<endl;
        orden1.set_nombre(temp_nombre);
      break;}
      case 2:{
        cout << "Numero de huevos: ";
        cin >>temp_huevos;
        cout << "Cantidad de harina: ";
        cin >>temp_harina;
        cout << "Sabor: ";
        cin >>temp_sabor;
        cout << "Cantidad de azucar: ";
        cin >>temp_azucar;
        cout << "Cantidad levadura: ";
        cin >>temp_levadura;
        cout << "Cantidad de mantequilla: ";
        cin >>temp_mantequilla;
        cout << "Molde: ";
        cin >>temp_molde;
        cout << "Numero de pisos: ";
        cin >>temp_pisos;
        temp_precio=(temp_huevos*3+temp_harina*0.1+temp_azucar*1.5+temp_levadura*0.12+temp_mantequilla*0.1295+
          temp_molde*10+temp_pisos*1000);
        orden1.agregar_pastelboda(temp_huevos,temp_harina,temp_sabor,temp_azucar,
          temp_levadura,temp_mantequilla,temp_molde,temp_precio,temp_pisos);
      break;}
      case 3:{
        cout << "Numero de huevos: ";
        cin >>temp_huevos;
        cout << "Cantidad de harina: ";
        cin >>temp_harina;
        cout << "Sabor: ";
        cin >>temp_sabor;
        cout << "Cantidad de azucar: ";
        cin >>temp_azucar;
        cout << "Cantidad levadura: ";
        cin >>temp_levadura;
        cout << "Cantidad de mantequilla: ";
        cin >>temp_mantequilla;
        cout << "Molde: ";
        cin >>temp_molde;
        cout << "Tipo de betun: ";
        cin >>temp_betun;
        temp_precio=(temp_huevos*3+temp_harina*0.1+temp_azucar*1.5+temp_levadura*0.12+temp_mantequilla*0.1295+
          temp_molde*10);
        orden1.agregar_cupcake(temp_huevos,temp_harina,temp_sabor,temp_azucar,
        temp_levadura,temp_mantequilla,temp_molde,temp_precio,temp_betun);
      break;}
      case 4:{
        cout << "Numero de huevos: ";
        cin >>temp_huevos;
        cout << "Cantidad de harina: ";
        cin >>temp_harina;
        cout << "Sabor: ";
        cin >>temp_sabor;
        cout << "Figura: ";
        cin >>temp_figura;
        cout << "Cantidad de azucar: ";
        cin >>temp_azucar;
        cout << "Cantidad de mantequilla: ";
        cin >>temp_mantequilla;
        temp_precio=(temp_huevos*3+temp_harina*0.1+temp_azucar*1.5+temp_mantequilla*0.1295);
        orden1.agregar_galleta(temp_huevos,temp_harina,temp_sabor,temp_figura,
        temp_azucar,temp_mantequilla,temp_precio);
      break;}
      case 5:{
        cout<<"Tipo de pan: ";
        cin>>temp_tipo;
        cout<<"Numero de huevos: ";
        cin>>temp_huevos;
        cout<<"Cantidad de harina: ";
        cin>>temp_harina;
        cout<<"Cantidad de levadura: ";
        cin>>temp_levadura;
        cout<<"Cantidad de leche: ";
        cin>>temp_leche;
        cout<<"Cantidad de azucar: ";
        cin>>temp_azucar;
        cout<<"Cantidad de mantequilla: ";
        cin>>temp_mantequilla;
        temp_precio=(temp_huevos*3+temp_harina*0.1+temp_levadura*0.12+temp_leche*0.5+temp_azucar*1.5+temp_mantequilla*0.1295);
        orden1.agregar_pan(temp_tipo,temp_huevos,temp_harina,temp_levadura,temp_leche,temp_azucar,temp_mantequilla,temp_precio);
      break;}
      case 6:{
        cout<<"El nombre de la orden es: "<<orden1.get_nombre()<<endl;
        orden1.muestra_pastelb();
        orden1.muestra_cupcake();
        orden1.muestra_galleta();
        orden1.muestra_pan();
        cout << "Tu precio es: " <<orden1.precio_total()<<endl;
      break;}
        }
      }
  return 0;
}

