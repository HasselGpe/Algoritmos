#include <stdio.h>
#include <windows.h>
#include <math.h>

int main()
{
    int opc, i, j, t;
    int  m, n, mat[3][2], ren, col, cn = 1, x[15];
    char vector[50];
    double Resultado, radio;
	const double pi=3.1416;
    do
{
    system("cls");
    system("color fd");
    printf("\t\tPractica 5\n\n");
    printf("1. Cuenta de 7 a -7 con histograma de * : \n");
    printf("2. Vector tamaño 50\n");
    printf("3. Matriz 3 x 2: \n\n");
    printf("4. Area del circulo\n");
    printf("5. salir\n ");
    printf("\tElige una opcion [1-5]");
    scanf("%d", &opc);
    switch(opc)
    {
       case 1:
             system("cls");
             system("color e0");
             printf("Programa que cuenta de 7 a -7");
	printf("Desplegando  cuenta con histograma de *");


	for(i=7;i>=-7;i--)
        {
    printf("\n%d", i);
    for(j=0;j<abs (i);j++)
    printf("*");
}
getchar ();
    system ("pause");
    system("cls");
 break;
 case 2:
     system("cls");
      system("color D0");
      printf("Programa con vector 50 donde se elige el tamaño\n");
      printf("\n Escribe tu frase no mayor a 50 caracteres: ");
      scanf("%s", vector);
      printf("\n Tu frase es:%s",vector);
getchar ();
getchar ();
break;
 case 3:
  system("cls");
  system("color D0");
  printf("3. matriz 3*2\n");
printf("\n Dame el numero de renglones: ");
            scanf("%d", &ren);
            printf("\n Dame el numero de columnas: ");
            scanf("%d", &col);
            for(m=1;m<=ren;m++)
            {
                for(n=1;n<=col;n++)
                {
                printf("\n [%d][%d]: ", m, n);
                scanf("%d", &mat[m][n]);
                }
                printf("\n");
            }
            system("cls");
            for(m=1;m<=ren;m++)
            {
                for(n=1;n<=col;n++)
                {
                printf(" [%d][%d]: %d \t", m, n, mat[m][n]);
                }
                printf("\n");
                }
                printf("\n");
                getchar ();
                system("pause");

break;
 case 4:
system ("cls");
 	system ("color 07");
 	printf("\n\t\t Programa que calcula el area de un circulo");
 	getchar ();
 	system ("cls");
 	system ("color 97");
 	printf("\n\nteclea el radio y presiona enter");
 	scanf("%lf", &radio);
 	Resultado= pi*pow(radio,2);
 	printf("\n\nel area del circulo es: %lf", Resultado);
getchar ();
    system("pause");
 break;
 default :
    if (opc==5)
        printf("\nAdios!!! :D");
    else
        printf("\nError :p");
    getchar ();
    getchar ();
    }
    }while(opc!=5);
}

