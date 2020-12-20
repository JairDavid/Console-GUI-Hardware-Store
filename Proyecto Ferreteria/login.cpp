#include <iostream>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#include "gotoxy.h"
void dibujar_caja();
void dibujar_marco();
void dibujar_vertical();
using namespace std;
void login();/*constructor de funcion */
int main(){
    string pass="rociolopez";
    string contr;
 getch();
         consola_change_color();
       dibujar_marco();
        gotoxy(40,20);cout<<"TEMA: PROYECTO FINAL DE PROGRAMACION ORIENTADA A OBJETOS, BASE DE DATOS DE UNA FERRETERIA!"<<endl;
         getch();
        system("cls");
    etiqueta:
    consola_change_color();
    dibujar_marco();
    dibujar_caja();
    login();
    gotoxy(66,26);cout<<">>>>  CUENTA: ADMINISTRADOR  <<<<"<<endl;
    gotoxy(72,29);cout<<"PASSWORD: "<<endl;
    gotoxy(83,29);cin>>contr;
    if(contr==pass){
            ocultar_cursor();
            gotoxy(77,32);cout<<"ACCEDIENDO"<<endl;
            Sleep(500);
            gotoxy(87,32);cout<<".";
            Sleep(500);
            gotoxy(88,32);cout<<".";
            Sleep(500);
            gotoxy(89,32);cout<<".";
    }else{
          system("color 4f");
       MessageBox(NULL,"CONTRASEÑA INCORRECTA","ACCESO DENEGADO",MB_ICONERROR|MB_OK);
        system("cls");
        goto etiqueta;
    }
}
void login(){/*DIBUJA EL MUÑECO*/
gotoxy(77,10);cout<<"°°°°°°°°°°°°";
gotoxy(75,11);cout<<"°°°°°°°°°°°°°°°°";
gotoxy(73,12);cout<<"°°°°°°°°°°°°°°°°°°°°";
gotoxy(71,13);cout<<"°°°°°°°°°°°°°°°°°°°°°°°°";
gotoxy(69,14);cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
gotoxy(67,15);cout<<"  °°°°°°°° °°°°°°°°°° °°°°°°°°";
gotoxy(69,16);cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
gotoxy(71,17);cout<<"°°°°°°°°°°°°°°°°°°°°°°°°";
gotoxy(73,18);cout<<"°°°°°°°°°°°°°°°°°°°°";
gotoxy(75,19);cout<<"°°°°°°°°°°°°°°°°";
gotoxy(77,20);cout<<"°°°°°°°°°°°°";
gotoxy(68,21);cout<<"   °°°°°°°°°°°°°°°°°°°°°°°°";
gotoxy(67,22);cout<<"  °°°°°°°°°°°°°°°°°°°°°°°°°°°°";
gotoxy(66,23);cout<<" °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";
gotoxy(65,24);cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°";

gotoxy(5,14);cout<<"     [---------------------------]"<<endl;
gotoxy(5,15);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(5,16);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(5,17);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(5,18);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(5,19);cout<<"     [<<<<<<<<BASE DE DATOS>>>>>>]"<<endl;
gotoxy(5,20);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(5,21);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(5,22);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(5,23);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(5,24);cout<<"     [---------------------------]"<<endl;

gotoxy(124,14);cout<<"     [---------------------------]"<<endl;
gotoxy(124,15);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(124,16);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(124,17);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(124,18);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(124,19);cout<<"     [<<<<<<<<BASE DE DATOS>>>>>>]"<<endl;
gotoxy(124,20);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(124,21);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(124,22);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(124,23);cout<<"     [°°°°°°°°°°°°°°°°°°°°°°°°°°°]"<<endl;
gotoxy(124,24);cout<<"     [---------------------------]"<<endl;

}
void dibujar_caja(){/*DIBUJA EL MARCO DONDE ESTARA EL MUÑECO*/
    char h=205;
     char v=186;
     char cur=205;
    char e1=201;
    char e2=200;
    char e3=187;
    char e4=188;
int i,j;
gotoxy(59,5);cout<<e1;
gotoxy(59,31);cout<<e2;
gotoxy(105,5);cout<<e3;
gotoxy(105,31);cout<<e4;
for(i=60;i<=104;i++){
gotoxy(i,5);cout<<h;
gotoxy(i,27);cout<<h;
gotoxy(i,31);cout<<h;
}
for(j=6;j<=30;j++){
   gotoxy(59,j);cout<<cur;
     gotoxy(105,j);cout<<v;
}
}
void dibujar_marco(){/*DIBUJA EL MARCO GENERAL DE TODA LA VENTANA*/
    int i,j;
for(i=2;i<=165;i++){
        char pincel=219;
    gotoxy(i,1);cout<<pincel;
     gotoxy(i,40);cout<<pincel;
}
for(j=2;j<=39;j++){
        char pincel=219;
    gotoxy(2,j);cout<<pincel;
     gotoxy(165,j);cout<<pincel;
}
}
