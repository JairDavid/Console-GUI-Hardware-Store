#include <iostream>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include "gotoxy.h"
using namespace std;
void marco_consola();
class logo{
    public:
void dibujar_logo();
}icon;/*OBJETO*/
void logo::dibujar_logo(){/*SE DIBUJA EL LOGTIPO DE LA FERRETERIA*/
int i,j;
    char h=205;
     char v=186;
     char cur=205;
    char e1=201;
    char e2=200;
    char e3=187;
    char e4=188;
    /*SE PUDO HACER CON CICLOS FOR PERO SE TENDRIAN QUE HACER SUMAS Y RESTAS EN LAS POSICIONES DESEADAS*/
gotoxy(141,4);cout<<h<<h<<h<<h<<h<<h;
gotoxy(140,4);cout<<e1;
gotoxy(140,5);cout<<v;
gotoxy(140,6);cout<<e2;
gotoxy(159,4);cout<<e3;
gotoxy(159,5);cout<<v;
gotoxy(159,6);cout<<e4;
gotoxy(147,4);cout<<e4;
gotoxy(147,3);cout<<e1;
gotoxy(148,3);cout<<h<<h<<h<<h;
gotoxy(152,3);cout<<e3;
gotoxy(152,4);cout<<e2;
gotoxy(153,4);cout<<h<<h<<h<<h<<h<<h;
gotoxy(142,5);cout<<">> FERRETERIA <<"<<endl;
gotoxy(141,6);cout<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h<<h;
gotoxy(148,16);cout<<h<<h<<h<<h;
gotoxy(147,16);cout<<e2;gotoxy(152,16);cout<<e4;
for(i=7;i<=15;i++){
gotoxy(148,i);cout<<"°";
 gotoxy(149,i);cout<<"°";
  gotoxy(150,i);cout<<"°";
   gotoxy(151,i);cout<<"°";
 gotoxy(147,i);cout<<v;
  gotoxy(152,i);cout<<v;
}
}
main(){
marco_consola();
icon.dibujar_logo();
}
void marco_consola(){/*SE DIBUJA EL MARCO DE LA VENTANA*/
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
