//Practica 4
#include <stdio.h>
#include <windows.h>
int main()
{
	char palabra [30];
	int vector [15], i,j,opc;
	int azul [50][50], m, n;
do
{
system ("cls");
system ("color 70");
printf(" Menu\t Seleciona una opcion\n");
printf("1)Vector tamaño 30 para cadena de caracteres\n");
printf("2) Vector tamaño 15 para numeros enteros \n");
printf("3) Matriz \n");
printf("4) Salir \n");

printf("Selecciona un opcion : ");
scanf("%d", &opc);

switch (opc)

{
	case 1:
	system("cls");
	system ("color a0");
	printf("1) Vector tamaño 30 para cadena de caracteres\n");
	printf("\n Teclea una cadena de caracteres por separado por_ sin espacio");
	scanf("%s", & palabra);
    printf("\n la cadena almacenada es: %s, palabra");
    getchar();
    getchar();
    break;
    
    case 2:
    	system("cls");
    	system("color 07");
    	printf("Vector donde se puede almacenar numeros enteros \n");
    	printf(" \n Teclea datos de tipo entero");
    }
		for (i=0; i<15; i++)
    	{
    		printf("\n % d", vector[i]);
    		for( j=0; j<vector [i]; j++)
	
	printf("*");
	
}
getchar();
getchar();
break;

     case 3 :
	system("cls");
	system("color 0e");
	printf("3) Matriz min 2x2 max 50x50\n");
	printf("\n Teclea el numero de renglones de la matriz");
	scanf("%d",& m);
	printf("\n Tecla el numero de columnas de la matriz");
	scanf ("%d", n);
	
	       for(i=0; i<m i++)
	            for (j=0; j<n; j++)
	            {
	            	printf(" \n Teclea dato[%d][%d]:",i,j);
	            	scanf("%d", & azul[i][j]);
				}
	       for (i=0; i<m; i++)
	       {
	       	    for (j=0; j<n; j++)
	       	        printf(" [%d][%d]: %d", i, j, azul[i][j]);
	       	        printf("\n"); 
		   }
		   getchar();
		   getchar();
		   break;
		   
		   default:
		   	   if (opc== 4)
		   	          printf("Error\n");
		   	          getchar();
		   	          getchar();
		   	      }
}  while (opc! = 3);

