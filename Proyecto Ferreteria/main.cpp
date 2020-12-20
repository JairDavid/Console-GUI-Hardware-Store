#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <fstream>
#include <locale>
#include "gotoxy.h"
void altas();
void bajas();
void consultas();
void modificaciones();
void caja_menu();
void salida();
using namespace std;
int main(){
    system("login.exe");/*SE LLAMA EL EJECUTABLE DEL ARCHIVO*/
            char entrada;
            int y=8;/*ESTA COORDENADA SERVIRA PARA CONTROLAR LA POSICION DE LA FLECHA Y LA OPCION */
            system("cls");
while(entrada!=VK_RETURN){/*VK_RETURN ES EL EVENTO DE LA TECLA ENTER*/
                        etiqueta:
            system("GUI.exe");/*SE LLAMA EL EJECUTABLE DEL ARCHIVO*/
           ocultar_cursor();
           caja_menu();/*DIBUJAMOS LA CAJA EN ASCCI*/
gotoxy(8,3);cout<<"같같같같같같같같같같같같같같같같같같같같>>>> [FRERRETERIA] <<<<같같같같같같같같같같같같같같같같같같같같"<<endl;
gotoxy(52,5);cout<<"MENU DE AVANCE: "<<endl;
gotoxy(36,8);cout<<"[ALTAS]...................AGREGAR AL INVENTARIO"<<endl;
gotoxy(36,12);cout<<"[BAJAS]...................QUITAR DEL INVENTARIO"<<endl;
gotoxy(36,16);cout<<"[CONSULTAS].............CONSULTAR EL INVENTARIO"<<endl;
gotoxy(36,20);cout<<"[MODIFICACIONES]........MODIFICAR EL INVENTARIO"<<endl;
gotoxy(36,24);cout<<"[]SALIR"<<endl;
entrada=getch();
switch(entrada){/*AVANZAREMOS EN UN AUMENTO DE 4 PARA ESTAR POSICIONADOS EN CADA OPCION EN Y*/
case'w':
    y-=4;
    break;
case's':
    y+=4;
    break;
        }
        if(y<8){/*SI LA POSICION SE PASA DE DONDE QUEREMOS LA POSICIONAMOS EN SU MISMO LUGAR "FLECHA" */
          y=8;
        }
        if(y>24){
            y=24;
        }
gotoxy(32,y+5);cout<<"    "<<endl;
gotoxy(32,y-4);cout<<"    "<<endl;/*USAMOS LOS ESPACIOS PARA BORRAR LA FLECHA EN LA POSICION ANTERIOR */
gotoxy(32,y);cout<<"===>"<<endl;/*UTILIZAMOS LA COORDENADA EN Y PARA MOVERNOS*/
gotoxy(32,y+4);cout<<"    "<<endl;
gotoxy(32,y+5);cout<<"    "<<endl;
}
if((y==8)&&(entrada==VK_RETURN)){
    system("cls");
            system("GUI.exe");
            mostrar_cursor();
            gotoxy(8,3);cout<<"같같같같같같같같같같같같같같같같같같같같>>>> [CREACION DE REGISTROS] <<<<같같같같같같같같같같같같같같같같같같같같"<<endl;
            gotoxy(8,36);cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;
            altas();
            ocultar_cursor();
    system("cls");
    goto etiqueta;/*REGRESAMOS A ESA PARTE DEL BUCLE*/
}
if((y==12)&&(entrada==VK_RETURN)){
            system("cls");
    system("GUI.exe");/*SE LLAMA EL EJECUTABLE DEL ARCHIVO*/
                mostrar_cursor();
                   gotoxy(8,3);cout<<"같같같같같같같같같같같같같같같같같같같같같같같>>>> [BAJA DE REGISTROS] <<<<같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;
            gotoxy(8,36);cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;
            bajas();
           system("cls");
            ocultar_cursor();
    goto etiqueta;/*REGRESAMOS A ESA PARTE DEL BUCLE*/
}
if((y==16)&&(entrada==VK_RETURN)){
            system("cls");
    system("GUI.exe");/*SE LLAMA EL EJECUTABLE DEL ARCHIVO*/
     gotoxy(8,3);cout<<"같같같같같같같같같같같같같같같같같같같같같같같>>>> [CONSULTAS] <<<<같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;
            gotoxy(8,38);cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;
    consultas();
    getch();
           system("cls");
    goto etiqueta;/*REGRESAMOS A ESA PARTE DEL BUCLE*/
}
if((y==20)&&(entrada==VK_RETURN)){
            system("cls");
    system("GUI.exe");/*SE LLAMA EL EJECUTABLE DEL ARCHIVO*/
       mostrar_cursor();
       gotoxy(8,3);cout<<"같같같같같같같같같같같같같같같같같같같같같같같>>>> [MODIFICACIONES] <<<<같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;
            gotoxy(8,38);cout<<"같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;
    modificaciones();
           system("cls");
           ocultar_cursor();
    goto etiqueta;/*REGRESAMOS A ESA PARTE DEL BUCLE*/
}
if((y==24)&&(entrada==VK_RETURN)){
        salida();
}
return 0;
}
void caja_menu(){
int i,j,g;
gotoxy(10,37);cout<<"AYUDA:";
gotoxy(30,37);cout<<"TECLA W: ARRIBA.";
gotoxy(60,37);cout<<"TECLA S: ABAJO.";
gotoxy(90,37);cout<<"TECLA INTRO: ACEPTAR.";
char caja=205,caja2=186,pincel=219,e3=187,e4=188;/*CADA VARIABLE TIENE SU ASPECTO EN ASCCI*/
for(g=3;g<=164;g++){/*CON EL FOR DIBUJAMOS EL MARCO DE LA CAJA*/
    gotoxy(g,34);cout<<pincel;
}
gotoxy(110,6);cout<<e3;
gotoxy(110,26);cout<<e4;
for(j=7;j<=25;j++){
    gotoxy(8,j);cout<<caja;
     gotoxy(110,j);cout<<caja2;
}
for(i=8;i<=109;i++){
            gotoxy(i,6);cout<<caja;
    gotoxy(i,26);cout<<caja;
}
}
void altas(){
        string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15;/*DATOS QUE SE LEERAN*/
        string auxs1;/*VARIABLE QUE SE COMPARARA*/
	    ofstream ingresar("base de datos.txt",ios::out|ios::app);/*ESTE ARCHIVO SE CREA DE ESCRITURA Y COLOQUE TODO AL FINAL DEL MISMO*/
	    ifstream consulta("base de datos.txt",ios::in);/*SE CREA DE LECTURA PARA SACAR EL CAMPO LLAVE*/
		bool encon=false;/*SE USARA PARA VERIFICAR SI EL REGISTRO YA EXISTE */
		if(ingresar.is_open() && consulta.is_open()){/*VERIFICACIONES DE APERTURA*/
        fflush(stdin);
       	gotoxy(8,5);cout<<"*Campo1  [Codigo Del Producto]------- : "<<endl;
        gotoxy(48,5);getline(cin,auxs1);
        consulta>>s1;/*LECTURA ADELANTADA PARA LA COMPARACION*/
        while(!consulta.eof()){/*MIENTRAS NO SE LLEGUE AL FINAL DEL ARCHIVO SE COMPARARA EL STRING*/
            if(auxs1==s1){/*EN CASO DE UN REGISTRO YA EXISTENTE SE ENVIA UN MENSAJE*/
				system("color 4f");
                gotoxy(50,16);cout<<"!!Ya Existe un Registro con esta Clave!!"<<endl;
                MessageBox(NULL,"REGISTRO YA EXISTENTE!","ERROR",MB_OK|MB_ICONERROR);
                encon=true;
                break;
            }
            consulta>>s1;
        }
		if(encon==false){/*SI NO EXISTE UN REGISTRO YA EN LA BASE DE DATOS SE PEDIRAN LOS DATOS */
		gotoxy(8,7);cout<<"*Campo2  [Clave De Venta]------------ :# "<<endl;
		gotoxy(8,9);cout<<"*Campo3  [Nombre Del Producto]------- : "<<endl;
		gotoxy(8,11);cout<<"*Campo4  [Fabricante]---------------- : "<<endl;
		gotoxy(8,13);cout<<"*Campo5  [Categoria]----------------- : "<<endl;
		gotoxy(8,15);cout<<"*Campo6  [Precio_Total]-------------- :$"<<endl;
		gotoxy(8,17);cout<<"*Campo7  [Cantidad]------------------ : "<<endl;
		gotoxy(8,19);cout<<"*Campo8  [Venta_Total Del Producto]-- :$"<<endl;
		gotoxy(8,21);cout<<"*Campo9  [Lugar De Importacion]------ : "<<endl;
		gotoxy(8,23);cout<<"*Campo10 [Seccion De Almacen]-------- : "<<endl;
		gotoxy(8,25);cout<<"*Campo11 [Nombre Del Encargado]------ : "<<endl;
		gotoxy(8,27);cout<<"*Campo12 [Codigo Del Proovedor]------ : "<<endl;
		gotoxy(8,29);cout<<"*Campo13 [Nombre Del Proovedor]------ : "<<endl;
		gotoxy(8,31);cout<<"*Campo14 [Garantia]------------------ : "<<endl;
		gotoxy(8,33);cout<<"*Campo15 [Fecha_entrega]------------- : "<<endl;
    	int llenado =0;/*CONTADOR QUE SERVIRA SOLO PARA EL LLENADO DE UN REGISTRO*/
    	while(!ingresar.eof()){
      		fflush(stdin);
		    gotoxy(48,7);getline(cin,s2); gotoxy(48,9);getline(cin,s3); gotoxy(48,11);getline(cin,s4); gotoxy(48,13);getline(cin,s5);
		    gotoxy(48,15);getline(cin,s6); gotoxy(48,17);getline(cin,s7); gotoxy(48,19);getline(cin,s8); gotoxy(48,21);getline(cin,s9); gotoxy(48,23);getline(cin,s10);
		    gotoxy(48,25);getline(cin,s11); gotoxy(48,27);getline(cin,s12); gotoxy(48,29);getline(cin,s13); gotoxy(48,31);getline(cin,s14); gotoxy(48,33);getline(cin,s15);
		    ingresar<<auxs1<<"  "<<s2<<"  "<<s3<<"  "<<s4<<"  "<<s5<<"  "<<s6<<"  "<<s7<<"  "<<"  "<<s8<<"  "<<s9<<"  "<<s10<<"  "<<s11<<"  "<<s12<<"  "<<s13<<"  "<<s14<<"  "<<s15<<endl;
			llenado++;/*COMO SOLO SE NECESITA UN REGISTRO SE AUMENTA EL CONTADOR A UNO*/
			if(llenado==1){
				MessageBox(NULL,"REGISTRO CREADO EXITOSAMENTE!","INFORMACION",MB_OK|MB_ICONINFORMATION);
    		break;/*ROMPEMOS EL CICLO*/
			}
		}
    }
    consulta.close();
	ingresar.close();
	consola_change_color();
}
}
void bajas(){
	string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15;
	ofstream aux;/*SE CREAN LOS FICHEROS LOGICOS*/
    ifstream leer;
    string auxs1;
    bool encon=false;
    aux.open("auxiliar.txt",ios::out);
    leer.open("base de datos.txt",ios::in);
    if(aux.is_open() && leer.is_open()){
        gotoxy(8,5);cout<<"Introduzca el codigo que desea Eliminar:   ";
        cin>>auxs1;
        leer>>s1;/*LECTURA ADELANTADA DEL ARCHIVO*/
        while(!leer.eof()){
           leer>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12>>s13>>s14>>s15;/*CARGAMOS TODOS LOS DATOS DEL PRIMER REGISTRO*/
		    if(auxs1==s1){/*SI SE ENCUENTRA EL ARCHIVO SE DEJARAN LOS DATOS EN ESE ARCHIVO Y SOLOSE MOVERAN LOS QUE NECESITAMOS*/
                gotoxy(50,16);cout<<">>REGISTRO ELIMINADO<<";
                MessageBox(NULL,"!REGISTRO ELIMINADO CORRECTAMENTE!","ELIMINACION",MB_OK|MB_ICONINFORMATION);
                encon=true;
            }else{
            	aux<<s1<<"  "<<s2<<"  "<<s3<<"  "<<s4<<"  "<<s5<<"  "<<s6<<"  "<<s7<<"  "<<s8<<"  "<<s9<<"  "<<s10<<"  "<<s11<<"  "<<s12<<"  "<<s13<<"  "<<s14<<"  "<<s15<<endl;
            /*GUARDAMOS LOS DATOS QUE NO SE BORRARAN*/
            }
            leer>>s1;/*SE SIGUE CON LA LECTURA DEL CAMPO A BUSCAR*/
        }
    }
if(encon=false){
    gotoxy(50,16);cout<<"!!!NO HAY REGISTRO DE LA CLAVE!!!";
}
    aux.close();
    leer.close();
    remove("base de datos.txt");
    rename("auxiliar.txt","base de datos.txt");
}
void consultas(){
string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15;/*VARIABLES QUE CARGARAN LA INFO.*/
string cod;/*BUSCADOR*/
ifstream ver("base de datos.txt",ios::out|ios::in);/*MODO ESCRITURA Y LECTURA*/
if(ver.is_open()){
        fflush(stdin);
	gotoxy(8,5);cout<<"Introduzca el codigo que desea Consultar:   ";
	gotoxy(50,5);cin>>cod;
	ver>>s1;
	while(!ver.eof()){
		ver>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12>>s13>>s14>>s15;/*CARGAMOS TODOS LOS DATOS A MOSTRAR*/
		if(cod==s1){/*MOSTRAMOS LOS DATOS*/
			gotoxy(8,7);cout<<"*Campo1  [Codigo Del Producto]------- : "<<s1<<endl;
			gotoxy(8,9);cout<<"*Campo2  [Clave De Venta]------------ :#"<<s2<<endl;
			gotoxy(8,11);cout<<"*Campo3  [Nombre Del Producto]------- : "<<s3<<endl;
			gotoxy(8,13);cout<<"*Campo4  [Fabricante]---------------- : "<<s4<<endl;
			gotoxy(8,15);cout<<"*Campo5  [Categoria]----------------- : "<<s5<<endl;
			gotoxy(8,17);cout<<"*Campo6  [Precio_Total]-------------- :$"<<s6<<endl;
			gotoxy(8,19);cout<<"*Campo7  [Cantidad]------------------ : "<<s7<<endl;
			gotoxy(8,21);cout<<"*Campo8  [Venta_Total Del Producto]-- :$"<<s8<<endl;
			gotoxy(8,23);cout<<"*Campo9  [Lugar De Importacion]------ : "<<s9<<endl;
			gotoxy(8,25);cout<<"*Campo10 [Seccion De Almacen]-------- : "<<s10<<endl;
			gotoxy(8,27);cout<<"*Campo11 [Nombre Del Encargado]------ : "<<s11<<endl;
			gotoxy(8,29);cout<<"*Campo12 [Codigo Del Proovedor]------ : "<<s12<<endl;
			gotoxy(8,31);cout<<"*Campo13 [Nombre Del Proovedor]------ : "<<s13<<endl;
			gotoxy(8,33);cout<<"*Campo14 [Garantia]------------------ : "<<s14<<endl;
			gotoxy(8,35);cout<<"*Campo15 [Fecha_entrega]------------- : "<<s15<<endl;
			break;
		}
		ver>>s1;
	while(ver.eof()){
        if(cod!=s1){/*EN CASO DE NO ENCOTRAR NADA SE MUESTRA EL MENSAJE*/
			gotoxy(50,16);cout<<"!!!NO HAY REGISTRO DE LA CLAVE!!!";
            MessageBox(NULL,"NO EXISTENTE!","ERROR",MB_OK|MB_ICONERROR);
            break;
		}
	}
	}
	ver.close();
}
}
void modificaciones(){
	string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15;
 	ofstream aux;
    ifstream leer;
    string auxs1,auxs2,auxs3,auxs4,auxs5,auxs6,auxs7,auxs8,auxs9,auxs10,auxs11,auxs12,auxs13,auxs14,auxs15;/*VARIABLES AUXILIARES*/
    string codm;
    aux.open("auxiliar.txt",ios::out|ios::app);
    leer.open("base de datos.txt",ios::in);
    if(aux.is_open()&&leer.is_open()){
    	gotoxy(8,4);cout<<"Introduzca el codigo que desea Modificar:   ";
		gotoxy(50,4);cin>>codm;
    	leer>>s1;
 		while(!leer.eof()){
            leer>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12>>s13>>s14>>s15;/*CARGAMOS LOS DATOS*/
            if(codm==s1){
                gotoxy(20,6);cout<<"REGISTRO ANTIGUO"<<endl;
                gotoxy(88,6);cout<<"REGISTRO NUEVO"<<endl;
            gotoxy(8,8);cout<<"[Codigo Del Producto]------- : "<<s1<<endl;/*MOSTRAMOS LOS DATOS ANTERIORES*/
			gotoxy(8,10);cout<<"[Clave De Venta]------------ :#"<<s2<<endl;
			gotoxy(8,12);cout<<"[Nombre Del Producto]------- : "<<s3<<endl;
			gotoxy(8,14);cout<<"[Fabricante]---------------- : "<<s4<<endl;
			gotoxy(8,16);cout<<"[Categoria]----------------- : "<<s5<<endl;
			gotoxy(8,18);cout<<"[Precio_Total]-------------- :$"<<s6<<endl;
			gotoxy(8,20);cout<<"[Cantidad]------------------ : "<<s7<<endl;
			gotoxy(8,22);cout<<"[Venta_Total Del Producto]-- :$"<<s8<<endl;
			gotoxy(8,24);cout<<"[Lugar De Importacion]------ : "<<s9<<endl;
			gotoxy(8,26);cout<<"[Seccion De Almacen]-------- : "<<s10<<endl;
			gotoxy(8,28);cout<<"[Nombre Del Encargado]------ : "<<s11<<endl;
			gotoxy(8,30);cout<<"[Codigo Del Proovedor]------ : "<<s12<<endl;
			gotoxy(8,32);cout<<"[Nombre Del Proovedor]------ : "<<s13<<endl;
			gotoxy(8,34);cout<<"[Garantia]------------------ : "<<s14<<endl;
			gotoxy(8,36);cout<<"[Fecha_entrega]------------- : "<<s15<<endl;
            /*-----------------------------------------------------------------*/
 			gotoxy(80,8);cout<<"[Codigo Del Producto]------- : "<<endl;
			gotoxy(80,10);cout<<"[Clave De Venta]------------ :#"<<endl;
			gotoxy(80,12);cout<<"[Nombre Del Producto]------- : "<<endl;
			gotoxy(80,14);cout<<"[Fabricante]---------------- : "<<endl;
			gotoxy(80,16);cout<<"[Categoria]----------------- : "<<endl;
			gotoxy(80,18);cout<<"[Precio_Total]-------------- :$"<<endl;
			gotoxy(80,20);cout<<"[Cantidad]------------------ : "<<endl;
			gotoxy(80,22);cout<<"[Venta_Total Del Producto]-- :$"<<endl;
			gotoxy(80,24);cout<<"[Lugar De Importacion]------ : "<<endl;
			gotoxy(80,26);cout<<"[Seccion De Almacen]-------- : "<<endl;
			gotoxy(80,28);cout<<"[Nombre Del Encargado]------ : "<<endl;
			gotoxy(80,30);cout<<"[Codigo Del Proovedor]------ : "<<endl;
			gotoxy(80,32);cout<<"[Nombre Del Proovedor]------ : "<<endl;
			gotoxy(80,34);cout<<"[Garantia]------------------ : "<<endl;
			gotoxy(80,36);cout<<"[Fecha_entrega]------------- : "<<endl;
			fflush(stdin);/*INGRESAMOS LOS NUEVIS DATOS*/
			gotoxy(112,8);getline(cin,auxs1); gotoxy(112,10);getline(cin,auxs2); gotoxy(112,12);getline(cin,auxs3); gotoxy(112,14);getline(cin,auxs4); gotoxy(112,16);getline(cin,auxs5);
   			gotoxy(112,18);getline(cin,auxs6); gotoxy(112,20);getline(cin,auxs7); gotoxy(112,22);getline(cin,auxs8); gotoxy(112,24);getline(cin,auxs9); gotoxy(112,26);getline(cin,auxs10);
   			gotoxy(112,28);getline(cin,auxs11); gotoxy(112,30);getline(cin,auxs12); gotoxy(112,32);getline(cin,auxs13); gotoxy(112,34);getline(cin,auxs14); gotoxy(112,36);getline(cin,auxs15);
   			aux<<auxs1<<"  "<<auxs2<<"  "<<auxs3<<"  "<<auxs4<<"  "<<auxs5<<"  "<<auxs6<<"  "<<auxs7<<"  "<<auxs8<<"  "<<auxs9<<"  "<<auxs10<<"  "<<auxs11<<"  "<<auxs12<<"  "<<auxs13<<"  "<<auxs14<<"  "<<auxs15<<endl;
 				MessageBox(NULL,"REGISTRO MODIFICADO EXITOSAMENTE!","INFORMACION",MB_OK|MB_ICONINFORMATION);
 			}else{
            aux<<s1<<"  "<<s2<<"  "<<s3<<"  "<<s4<<"  "<<s5<<"  "<<s6<<"  "<<s7<<"  "<<s8<<"  "<<s9<<"  "<<s10<<"  "<<s11<<"  "<<s12<<"  "<<s13<<"  "<<s14<<"  "<<s15<<endl;
            /*GUARDAMOS LOS DATOS ANTERIORES DEL REGISTRO*/
 			}
 		 	leer>>s1;
        }
	}

    aux.close();
    leer.close();
    remove("base de datos.txt");
    rename("auxiliar.txt","base de datos.txt");
}
void salida(){
system("cls");
system("GUI.exe");
int i,j;
 gotoxy(8,4);cout<<"같같같같같같같같같같같같같같같같같같같같같같같>>>> [PROGRAMADO POR:] <<<<같같같같같같같같같같같같같같같같같같같같같같같같같"<<endl;
for(j=4;j<=36;j++){
    gotoxy(8,j);cout<<"같";
      gotoxy(129,j);cout<<"같";
}
for(i=8;i<=129;i++){
      gotoxy(i,36);cout<<"같";
}
int cont=0;
int n1=20,na1=-1,n2=20,na2=-1,n3=20,na3=-1,n4=103,na4=-1,n5=100,na5=-1;
gotoxy(19,12);cout<<"*";
gotoxy(19,18);cout<<"*";
gotoxy(19,24);cout<<"*";
    char nombre1[50]={'V','A','S','Q','U','E','Z',' ','M','A','R','T','I','N','E','Z',' ','J','A','I','R',' ','D','A','V','I','D'};
    char nombre2[50]={'S','A','L','D','A','N','A',' ','E','S','P','I','N','O','Z','A',' ','H','E','C','T','O','R'};
    char nombre3[50]={'L','O','P','E','Z',' ','S','A','N','C','H','E','Z',' ','J','A','V','I','E','R'};
    char nombre4[5]={'4','2','0','5'};
    char nombre5[11]={'I','N','F','O','R','M','A','T','I','C','A'};
    while(cont!=30){
        cont++;
        na1++;
        n1++;
        gotoxy(n1,12);cout<<nombre1[na1];
        Sleep(50);
    }
    cont=0;
        while(cont!=30){
        cont++;
        na2++;
        n2++;
        gotoxy(n2,18);cout<<nombre2[na2];
        Sleep(50);
    }
    cont=0;
        while(cont!=30){
        cont++;
        na3++;
        n3++;
        gotoxy(n3,24);cout<<nombre3[na3];
        Sleep(50);
    }
    gotoxy(100,8);cout<<"같같같같같같";
gotoxy(98,9);cout<<"같같같같같같같같";
gotoxy(96,10);cout<<"같같같같같같같같같같";
gotoxy(94,11);cout<<"같같같같같같같같같같같같";
gotoxy(92,12);cout<<"같같같같같같같같같같같같같같";
gotoxy(90,13);cout<<"  같같같같 같같같같같 같같같같";
gotoxy(92,14);cout<<"같같같같같같같같같같같같같같";
gotoxy(94,15);cout<<"같같같같같같같같같같같같";
gotoxy(96,16);cout<<"같같같같같같같같같같";
gotoxy(98,17);cout<<"같같같같같같같같";
gotoxy(100,18);cout<<"같같같같같같";
gotoxy(91,19);cout<<"   같같같같같같같같같같같같";
gotoxy(90,20);cout<<"  같같같같같같같같같같같같같같";
gotoxy(89,21);cout<<" 같같같같같같같같같같같같같같같같";
gotoxy(88,22);cout<<"같같같같같같같같같같같같같같같같같같";
        cont=0;
        while(cont!=5){
        cont++;
        na4++;
        n4++;
        gotoxy(n4,24);cout<<nombre4[na4];
        Sleep(50);
    }
        cont=0;
        while(cont!=11){
        cont++;
        na5++;
        n5++;
        gotoxy(n5,27);cout<<nombre5[na5];
        Sleep(50);
    }
    getch();
    system("cls");
}
