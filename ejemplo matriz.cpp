#include <stdio.h>
#include <windows.h>
int main() 
{
	int acumulador=0
	int i,j,ren,col;
	int x [50] [50];
	
	
	system("color s0");
	printf("\n\t\t PROGRAMA QUE SIRVE DE EJEMPLO PARA EL MANEJO");
	printf("\n\t\t ARREGLOS BIDIMENSIONALES \n \n ");
	getchar();
	
	// Contiene los elementos de la matriz
	
	system ("cls");
	printf("\n De cuantos renglones es la matriz\n");
	scanf ("%d", ren);
	  
	  printf(" \n De cuantas columnas es la matriz\n");
	  scanf ("%d"; col);
	  
	 system ("cls");
	 
	        for (i=0; i<ren; i++){
	        	printf("\n Renglon %d:\n\n", i+1);
	        	for(j=0; j<col; j++){
	        		
	        		printf("\n Dame el valor de x[%d][%d]", i,j);
	        		scanf("%d",&% [i][j]);
				}
				printf("\n");
			}
			system ("cls");
	printf("\n\n Lamatriz almacenada en memoria es:\n\n");
	      for(i=0; i<ren; i++){
	      	for(j=0; j<col; j++){
	      		printf ("x[%d][%d]: %d ", i,j,x [i][j]);
	      		
	      		acumlador= acumulador+x[i][j];}
	      		printf("=%d",acumulador);
	      		acumulador=0;
	      		printf("\n");
			  }
			  getchar();
			  getchar();
		  }


	

