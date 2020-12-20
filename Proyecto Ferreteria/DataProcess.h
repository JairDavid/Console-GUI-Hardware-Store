#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <fstream>
#include <locale>
#include "gotoxy.h"
#ifndef DataProcess_H_INCLUDED
#define DataProcess_H_INCLUDED
class {
    public void insert() {
        string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15;/*DATOS QUE SE LEERAN*/
        string auxs1;/*VARIABLE QUE SE COMPARARA*/
        ofstream ingresar("base de datos.txt",ios::out|ios::app);/*ESTE ARCHIVO SE CREA DE ESCRITURA Y COLOQUE TODO AL FINAL DEL MISMO*/
        ifstream consulta("base de datos.txt",ios::in);/*SE CREA DE LECTURA PARA SACAR EL CAMPO LLAVE*/
        bool encon=false;/*SE USARA PARA VERIFICAR SI EL REGISTRO YA EXISTE */
        if(ingresar.is_open() && consulta.is_open()) { /*VERIFICACIONES DE APERTURA*/
            fflush(stdin);
            gotoxy(8,5);
            cout<<"*Campo1  [Codigo Del Producto]------- : "<<endl;
            gotoxy(48,5);
            getline(cin,auxs1);
            consulta>>s1;/*LECTURA ADELANTADA PARA LA COMPARACION*/
            while(!consulta.eof()) { /*MIENTRAS NO SE LLEGUE AL FINAL DEL ARCHIVO SE COMPARARA EL STRING*/
                if(auxs1==s1) { /*EN CASO DE UN REGISTRO YA EXISTENTE SE ENVIA UN MENSAJE*/
                    system("color 4f");
                    gotoxy(50,16);
                    cout<<"!!Ya Existe un Registro con esta Clave!!"<<endl;
                    MessageBox(NULL,"REGISTRO YA EXISTENTE!","ERROR",MB_OK|MB_ICONERROR);
                    encon=true;
                    break;
                }
                consulta>>s1;
            }
            if(encon==false) { /*SI NO EXISTE UN REGISTRO YA EN LA BASE DE DATOS SE PEDIRAN LOS DATOS */
                gotoxy(8,7);
                cout<<"*Campo2  [Clave De Venta]------------ :# "<<endl;
                gotoxy(8,9);
                cout<<"*Campo3  [Nombre Del Producto]------- : "<<endl;
                gotoxy(8,11);
                cout<<"*Campo4  [Fabricante]---------------- : "<<endl;
                gotoxy(8,13);
                cout<<"*Campo5  [Categoria]----------------- : "<<endl;
                gotoxy(8,15);
                cout<<"*Campo6  [Precio_Total]-------------- :$"<<endl;
                gotoxy(8,17);
                cout<<"*Campo7  [Cantidad]------------------ : "<<endl;
                gotoxy(8,19);
                cout<<"*Campo8  [Venta_Total Del Producto]-- :$"<<endl;
                gotoxy(8,21);
                cout<<"*Campo9  [Lugar De Importacion]------ : "<<endl;
                gotoxy(8,23);
                cout<<"*Campo10 [Seccion De Almacen]-------- : "<<endl;
                gotoxy(8,25);
                cout<<"*Campo11 [Nombre Del Encargado]------ : "<<endl;
                gotoxy(8,27);
                cout<<"*Campo12 [Codigo Del Proovedor]------ : "<<endl;
                gotoxy(8,29);
                cout<<"*Campo13 [Nombre Del Proovedor]------ : "<<endl;
                gotoxy(8,31);
                cout<<"*Campo14 [Garantia]------------------ : "<<endl;
                gotoxy(8,33);
                cout<<"*Campo15 [Fecha_entrega]------------- : "<<endl;
                int llenado =0;/*CONTADOR QUE SERVIRA SOLO PARA EL LLENADO DE UN REGISTRO*/
                while(!ingresar.eof()) {
                    fflush(stdin);
                    gotoxy(48,7);
                    getline(cin,s2);
                    gotoxy(48,9);
                    getline(cin,s3);
                    gotoxy(48,11);
                    getline(cin,s4);
                    gotoxy(48,13);
                    getline(cin,s5);
                    gotoxy(48,15);
                    getline(cin,s6);
                    gotoxy(48,17);
                    getline(cin,s7);
                    gotoxy(48,19);
                    getline(cin,s8);
                    gotoxy(48,21);
                    getline(cin,s9);
                    gotoxy(48,23);
                    getline(cin,s10);
                    gotoxy(48,25);
                    getline(cin,s11);
                    gotoxy(48,27);
                    getline(cin,s12);
                    gotoxy(48,29);
                    getline(cin,s13);
                    gotoxy(48,31);
                    getline(cin,s14);
                    gotoxy(48,33);
                    getline(cin,s15);
                    ingresar<<auxs1<<"  "<<s2<<"  "<<s3<<"  "<<s4<<"  "<<s5<<"  "<<s6<<"  "<<s7<<"  "<<"  "<<s8<<"  "<<s9<<"  "<<s10<<"  "<<s11<<"  "<<s12<<"  "<<s13<<"  "<<s14<<"  "<<s15<<endl;
                    llenado++;/*COMO SOLO SE NECESITA UN REGISTRO SE AUMENTA EL CONTADOR A UNO*/
                    if(llenado==1) {
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

    public void Uptade() {
        string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15;
        ofstream aux;
        ifstream leer;
        string auxs1,auxs2,auxs3,auxs4,auxs5,auxs6,auxs7,auxs8,auxs9,auxs10,auxs11,auxs12,auxs13,auxs14,auxs15;/*VARIABLES AUXILIARES*/
        string codm;
        aux.open("auxiliar.txt",ios::out|ios::app);
        leer.open("base de datos.txt",ios::in);
        if(aux.is_open()&&leer.is_open()) {
            gotoxy(8,4);
            cout<<"Introduzca el codigo que desea Modificar:   ";
            gotoxy(50,4);
            cin>>codm;
            leer>>s1;
            while(!leer.eof()) {
                leer>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12>>s13>>s14>>s15;/*CARGAMOS LOS DATOS*/
                if(codm==s1) {
                    gotoxy(20,6);
                    cout<<"REGISTRO ANTIGUO"<<endl;
                    gotoxy(88,6);
                    cout<<"REGISTRO NUEVO"<<endl;
                    gotoxy(8,8);
                    cout<<"[Codigo Del Producto]------- : "<<s1<<endl;/*MOSTRAMOS LOS DATOS ANTERIORES*/
                    gotoxy(8,10);
                    cout<<"[Clave De Venta]------------ :#"<<s2<<endl;
                    gotoxy(8,12);
                    cout<<"[Nombre Del Producto]------- : "<<s3<<endl;
                    gotoxy(8,14);
                    cout<<"[Fabricante]---------------- : "<<s4<<endl;
                    gotoxy(8,16);
                    cout<<"[Categoria]----------------- : "<<s5<<endl;
                    gotoxy(8,18);
                    cout<<"[Precio_Total]-------------- :$"<<s6<<endl;
                    gotoxy(8,20);
                    cout<<"[Cantidad]------------------ : "<<s7<<endl;
                    gotoxy(8,22);
                    cout<<"[Venta_Total Del Producto]-- :$"<<s8<<endl;
                    gotoxy(8,24);
                    cout<<"[Lugar De Importacion]------ : "<<s9<<endl;
                    gotoxy(8,26);
                    cout<<"[Seccion De Almacen]-------- : "<<s10<<endl;
                    gotoxy(8,28);
                    cout<<"[Nombre Del Encargado]------ : "<<s11<<endl;
                    gotoxy(8,30);
                    cout<<"[Codigo Del Proovedor]------ : "<<s12<<endl;
                    gotoxy(8,32);
                    cout<<"[Nombre Del Proovedor]------ : "<<s13<<endl;
                    gotoxy(8,34);
                    cout<<"[Garantia]------------------ : "<<s14<<endl;
                    gotoxy(8,36);
                    cout<<"[Fecha_entrega]------------- : "<<s15<<endl;
                    /*-----------------------------------------------------------------*/
                    gotoxy(80,8);
                    cout<<"[Codigo Del Producto]------- : "<<endl;
                    gotoxy(80,10);
                    cout<<"[Clave De Venta]------------ :#"<<endl;
                    gotoxy(80,12);
                    cout<<"[Nombre Del Producto]------- : "<<endl;
                    gotoxy(80,14);
                    cout<<"[Fabricante]---------------- : "<<endl;
                    gotoxy(80,16);
                    cout<<"[Categoria]----------------- : "<<endl;
                    gotoxy(80,18);
                    cout<<"[Precio_Total]-------------- :$"<<endl;
                    gotoxy(80,20);
                    cout<<"[Cantidad]------------------ : "<<endl;
                    gotoxy(80,22);
                    cout<<"[Venta_Total Del Producto]-- :$"<<endl;
                    gotoxy(80,24);
                    cout<<"[Lugar De Importacion]------ : "<<endl;
                    gotoxy(80,26);
                    cout<<"[Seccion De Almacen]-------- : "<<endl;
                    gotoxy(80,28);
                    cout<<"[Nombre Del Encargado]------ : "<<endl;
                    gotoxy(80,30);
                    cout<<"[Codigo Del Proovedor]------ : "<<endl;
                    gotoxy(80,32);
                    cout<<"[Nombre Del Proovedor]------ : "<<endl;
                    gotoxy(80,34);
                    cout<<"[Garantia]------------------ : "<<endl;
                    gotoxy(80,36);
                    cout<<"[Fecha_entrega]------------- : "<<endl;
                    fflush(stdin);/*INGRESAMOS LOS NUEVIS DATOS*/
                    gotoxy(112,8);
                    getline(cin,auxs1);
                    gotoxy(112,10);
                    getline(cin,auxs2);
                    gotoxy(112,12);
                    getline(cin,auxs3);
                    gotoxy(112,14);
                    getline(cin,auxs4);
                    gotoxy(112,16);
                    getline(cin,auxs5);
                    gotoxy(112,18);
                    getline(cin,auxs6);
                    gotoxy(112,20);
                    getline(cin,auxs7);
                    gotoxy(112,22);
                    getline(cin,auxs8);
                    gotoxy(112,24);
                    getline(cin,auxs9);
                    gotoxy(112,26);
                    getline(cin,auxs10);
                    gotoxy(112,28);
                    getline(cin,auxs11);
                    gotoxy(112,30);
                    getline(cin,auxs12);
                    gotoxy(112,32);
                    getline(cin,auxs13);
                    gotoxy(112,34);
                    getline(cin,auxs14);
                    gotoxy(112,36);
                    getline(cin,auxs15);
                    aux<<auxs1<<"  "<<auxs2<<"  "<<auxs3<<"  "<<auxs4<<"  "<<auxs5<<"  "<<auxs6<<"  "<<auxs7<<"  "<<auxs8<<"  "<<auxs9<<"  "<<auxs10<<"  "<<auxs11<<"  "<<auxs12<<"  "<<auxs13<<"  "<<auxs14<<"  "<<auxs15<<endl;
                    MessageBox(NULL,"REGISTRO MODIFICADO EXITOSAMENTE!","INFORMACION",MB_OK|MB_ICONINFORMATION);
                } else {
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

    public void Delete() {
        string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15;
        ofstream aux;/*SE CREAN LOS FICHEROS LOGICOS*/
        ifstream leer;
        string auxs1;
        bool encon=false;
        aux.open("auxiliar.txt",ios::out);
        leer.open("base de datos.txt",ios::in);
        if(aux.is_open() && leer.is_open()) {
            gotoxy(8,5);
            cout<<"Introduzca el codigo que desea Eliminar:   ";
            cin>>auxs1;
            leer>>s1;/*LECTURA ADELANTADA DEL ARCHIVO*/
            while(!leer.eof()) {
                leer>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12>>s13>>s14>>s15;/*CARGAMOS TODOS LOS DATOS DEL PRIMER REGISTRO*/
                if(auxs1==s1) { /*SI SE ENCUENTRA EL ARCHIVO SE DEJARAN LOS DATOS EN ESE ARCHIVO Y SOLOSE MOVERAN LOS QUE NECESITAMOS*/
                    gotoxy(50,16);
                    cout<<">>REGISTRO ELIMINADO<<";
                    MessageBox(NULL,"!REGISTRO ELIMINADO CORRECTAMENTE!","ELIMINACION",MB_OK|MB_ICONINFORMATION);
                    encon=true;
                } else {
                    aux<<s1<<"  "<<s2<<"  "<<s3<<"  "<<s4<<"  "<<s5<<"  "<<s6<<"  "<<s7<<"  "<<s8<<"  "<<s9<<"  "<<s10<<"  "<<s11<<"  "<<s12<<"  "<<s13<<"  "<<s14<<"  "<<s15<<endl;
                    /*GUARDAMOS LOS DATOS QUE NO SE BORRARAN*/
                }
                leer>>s1;/*SE SIGUE CON LA LECTURA DEL CAMPO A BUSCAR*/
            }
        }
        if(encon=false) {
            gotoxy(50,16);
            cout<<"!!!NO HAY REGISTRO DE LA CLAVE!!!";
        }
        aux.close();
        leer.close();
        remove("base de datos.txt");
        rename("auxiliar.txt","base de datos.txt");
    }
    void consultas() {
        string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15;/*VARIABLES QUE CARGARAN LA INFO.*/
        string cod;/*BUSCADOR*/
        ifstream ver("base de datos.txt",ios::out|ios::in);/*MODO ESCRITURA Y LECTURA*/
        if(ver.is_open()) {
            fflush(stdin);
            gotoxy(8,5);
            cout<<"Introduzca el codigo que desea Consultar:   ";
            gotoxy(50,5);
            cin>>cod;
            ver>>s1;
            while(!ver.eof()) {
                ver>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12>>s13>>s14>>s15;/*CARGAMOS TODOS LOS DATOS A MOSTRAR*/
                if(cod==s1) { /*MOSTRAMOS LOS DATOS*/
                    gotoxy(8,7);
                    cout<<"*Campo1  [Codigo Del Producto]------- : "<<s1<<endl;
                    gotoxy(8,9);
                    cout<<"*Campo2  [Clave De Venta]------------ :#"<<s2<<endl;
                    gotoxy(8,11);
                    cout<<"*Campo3  [Nombre Del Producto]------- : "<<s3<<endl;
                    gotoxy(8,13);
                    cout<<"*Campo4  [Fabricante]---------------- : "<<s4<<endl;
                    gotoxy(8,15);
                    cout<<"*Campo5  [Categoria]----------------- : "<<s5<<endl;
                    gotoxy(8,17);
                    cout<<"*Campo6  [Precio_Total]-------------- :$"<<s6<<endl;
                    gotoxy(8,19);
                    cout<<"*Campo7  [Cantidad]------------------ : "<<s7<<endl;
                    gotoxy(8,21);
                    cout<<"*Campo8  [Venta_Total Del Producto]-- :$"<<s8<<endl;
                    gotoxy(8,23);
                    cout<<"*Campo9  [Lugar De Importacion]------ : "<<s9<<endl;
                    gotoxy(8,25);
                    cout<<"*Campo10 [Seccion De Almacen]-------- : "<<s10<<endl;
                    gotoxy(8,27);
                    cout<<"*Campo11 [Nombre Del Encargado]------ : "<<s11<<endl;
                    gotoxy(8,29);
                    cout<<"*Campo12 [Codigo Del Proovedor]------ : "<<s12<<endl;
                    gotoxy(8,31);
                    cout<<"*Campo13 [Nombre Del Proovedor]------ : "<<s13<<endl;
                    gotoxy(8,33);
                    cout<<"*Campo14 [Garantia]------------------ : "<<s14<<endl;
                    gotoxy(8,35);
                    cout<<"*Campo15 [Fecha_entrega]------------- : "<<s15<<endl;
                    break;
                }
                ver>>s1;
                while(ver.eof()) {
                    if(cod!=s1) { /*EN CASO DE NO ENCOTRAR NADA SE MUESTRA EL MENSAJE*/
                        gotoxy(50,16);
                        cout<<"!!!NO HAY REGISTRO DE LA CLAVE!!!";
                        MessageBox(NULL,"NO EXISTENTE!","ERROR",MB_OK|MB_ICONERROR);
                        break;
                    }
                }
            }
            ver.close();
        }
    }

    public void request() {
        string s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15;/*VARIABLES QUE CARGARAN LA INFO.*/
        string cod;/*BUSCADOR*/
        ifstream ver("base de datos.txt",ios::out|ios::in);/*MODO ESCRITURA Y LECTURA*/
        if(ver.is_open()) {
            fflush(stdin);
            gotoxy(8,5);
            cout<<"Introduzca el codigo que desea Consultar:   ";
            gotoxy(50,5);
            cin>>cod;
            ver>>s1;
            while(!ver.eof()) {
                ver>>s2>>s3>>s4>>s5>>s6>>s7>>s8>>s9>>s10>>s11>>s12>>s13>>s14>>s15;/*CARGAMOS TODOS LOS DATOS A MOSTRAR*/
                if(cod==s1) { /*MOSTRAMOS LOS DATOS*/
                    gotoxy(8,7);
                    cout<<"*Campo1  [Codigo Del Producto]------- : "<<s1<<endl;
                    gotoxy(8,9);
                    cout<<"*Campo2  [Clave De Venta]------------ :#"<<s2<<endl;
                    gotoxy(8,11);
                    cout<<"*Campo3  [Nombre Del Producto]------- : "<<s3<<endl;
                    gotoxy(8,13);
                    cout<<"*Campo4  [Fabricante]---------------- : "<<s4<<endl;
                    gotoxy(8,15);
                    cout<<"*Campo5  [Categoria]----------------- : "<<s5<<endl;
                    gotoxy(8,17);
                    cout<<"*Campo6  [Precio_Total]-------------- :$"<<s6<<endl;
                    gotoxy(8,19);
                    cout<<"*Campo7  [Cantidad]------------------ : "<<s7<<endl;
                    gotoxy(8,21);
                    cout<<"*Campo8  [Venta_Total Del Producto]-- :$"<<s8<<endl;
                    gotoxy(8,23);
                    cout<<"*Campo9  [Lugar De Importacion]------ : "<<s9<<endl;
                    gotoxy(8,25);
                    cout<<"*Campo10 [Seccion De Almacen]-------- : "<<s10<<endl;
                    gotoxy(8,27);
                    cout<<"*Campo11 [Nombre Del Encargado]------ : "<<s11<<endl;
                    gotoxy(8,29);
                    cout<<"*Campo12 [Codigo Del Proovedor]------ : "<<s12<<endl;
                    gotoxy(8,31);
                    cout<<"*Campo13 [Nombre Del Proovedor]------ : "<<s13<<endl;
                    gotoxy(8,33);
                    cout<<"*Campo14 [Garantia]------------------ : "<<s14<<endl;
                    gotoxy(8,35);
                    cout<<"*Campo15 [Fecha_entrega]------------- : "<<s15<<endl;
                    break;
                }
                ver>>s1;
                while(ver.eof()) {
                    if(cod!=s1) { /*EN CASO DE NO ENCOTRAR NADA SE MUESTRA EL MENSAJE*/
                        gotoxy(50,16);
                        cout<<"!!!NO HAY REGISTRO DE LA CLAVE!!!";
                        MessageBox(NULL,"NO EXISTENTE!","ERROR",MB_OK|MB_ICONERROR);
                        break;
                    }
                }
            }
            ver.close();
        }

    } Data;


#endif // DataProcess_H_INCLUDED
