#include <stdio.h>
#include <windows.h>

int main()
{
      int i, j;
	  int t;
	  int vector[50];
      system("cls");
      system("color D0");
      printf("Programa con vector 50 donde se elige el tamaño\n");
      printf("Eligue el tamaño que desees\n");
      scanf("%d",& t);
 //recoleccion de datos
 for(i=1; i<t; i++)
 {
printf("\n dato %d:",vector[i]);
 scanf("%d", &vector [i]);
 }
 //impresion de datos
 for(j=1 ; j<t; j++)
 {
printf("\n dato %d:",vector[j]);
scanf("%d", &vector [j]);
}

}
