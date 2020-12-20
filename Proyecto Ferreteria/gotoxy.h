#ifndef GOTOXY_H_INCLUDED
#define GOTOXY_H_INCLUDED
/*ESTO YA LO SABE*/
void consola_change_color(){
system("color 0b");
}
void gotoxy(int x1, int y1){
HANDLE modificador = GetStdHandle(STD_OUTPUT_HANDLE);
COORD posicion;
posicion.X = x1;
posicion.Y = y1;
SetConsoleCursorPosition(modificador,posicion);
}
void ocultar_cursor(){
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = FALSE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
void mostrar_cursor(){
   HANDLE consoleHandle = GetStdHandle(STD_OUTPUT_HANDLE);
   CONSOLE_CURSOR_INFO info;
   info.dwSize = 100;
   info.bVisible = TRUE;
   SetConsoleCursorInfo(consoleHandle, &info);
}
#endif // GOTOXY_H_INCLUDED
