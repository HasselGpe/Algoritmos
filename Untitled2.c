#include <stdio.h>
#include <windows.h>

 struct _libro {
char Titulo [20];
        char Autor [20];
        char Editorial[10];
        char Fecha[10];
 struct _libro *siguiente;
 };

 struct _libro *primero, *ultimo;

 void mostrar_menu() {
     system("cls");
    system("color 71");
 printf("\n\nMenu:\n=====\n\n");
 printf("1.- Añadir elementos\n");
 printf("2.- Borrar elementos\n");
 printf("3.- Mostrar lista\n");
 printf("4.- Salir\n\n");
 printf("Escoge una opcion: ");fflush(stdout);
 }
 void anadir_elemento() {
 struct _libro *nuevo;
 nuevo = (struct _libro *) malloc (sizeof(struct _libro));
 if (nuevo==NULL) printf( "No hay memoria disponible!\n");

 printf("\nNuevo elemento:\n");
 printf("Teclea Titulo: "); fflush(stdout);
 gets(nuevo->Titulo);
 printf("Teclea Autor: "); fflush(stdout);
 gets(nuevo->Autor);
 printf("Teclea Editorial: "); fflush(stdout);
 gets(nuevo->Editorial);
 printf("Teclea Fecha de publicacion: "); fflush(stdout);
 gets(nuevo-> Fecha);
 nuevo->siguiente = NULL;
 if (primero==NULL) {
 printf( "Primer elemento\n");
 primero = nuevo;
 ultimo = nuevo;
 }
 else {
 ultimo->siguiente = nuevo;
 ultimo = nuevo;
 }
 }

 void mostrar_lista() {
 struct _libro *auxiliar;
 int i;

 i=0;
 auxiliar = primero;
 printf("\nMostrando la lista completa:\n");
 while (auxiliar!=NULL) {
 printf( "Titulo: %s, Autor: %s, Editorial: %s, Fecha: %s\n",
 auxiliar->Titulo,auxiliar->Autor,auxiliar->Editorial,auxiliar->Fecha);
 auxiliar = auxiliar->siguiente;
 i++;
 }
 if (i==0) printf( "\nLa lista está vacía!!\n" );
 getchar();
 getchar();
 }

 char main() {
 char opcion;

 primero = (struct _libro *) NULL;
 ultimo = (struct _libro *) NULL;
 do {
 mostrar_menu();
 opcion = getch();
 switch ( opcion ) {
 case '1': anadir_elemento();
 break;
 case '2': printf("No disponible todavía!\n");
 break;
 case '3': mostrar_lista(primero);
 break;
 case '4': exit( 1 );
 default: printf( "Opción no válida\n" );
 break;
 }
 } while (opcion!='4');
}
