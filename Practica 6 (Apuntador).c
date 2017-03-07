//Programa que realiza multiples operaciones
#include <stdio.h>
#include <Windows.h>
#include <math.h>
void main ()
{
    int opc;
    int i,vector[10];
    int *p;
	double Resultado, radio;
	double *pResultado, *pradio;
	pResultado=&Resultado;
	pradio=&radio;
	float b,h;
	float *pb, *ph;
	float resultado;
	float *presultado;
	presultado= &resultado;
	pb=&b;
	ph=&h;
	const double pi=3.1416;
do
{

    printf ("\nMenu principal");
    printf("\n1.Programa que saca el area del triangulo ");
    printf("\n2.Programa que calcula el area de un circulo-");
    printf("\n3.Vector Tamaño 10-");
    printf ("\n4.Salir- ");
    printf ("\nEscoje opcion [1-4]\n");
    scanf ("%d",&opc);
    system("cls");
    switch (opc)
{
  case 1:
	system ("cls");
	system("color B0");
	printf("\n Programa que saca el area del triangulo\n");
	printf("\n teclea la base\n");
	scanf("%f", &*pb);
	printf("\n teclea la altura\n");
	scanf("%f", & *ph);
	*presultado =( *pb* *ph)/2;
	printf("\n AT= %f", *presultado);
	getchar ();
	system("pause");
	system("cls");

break;

case 2:
	system ("cls");
 	system ("color 07");
 	printf("\n\t\t Programa que calcula el area de un circulo");
 	getchar ();
 	system ("cls");
 	system ("color 97");
 	printf("\n\nteclea el radio y presiona enter");
 	scanf("%lf", &*pradio);
 	*pResultado= pi*pow(*pradio,2);
 	printf("\n\nel area del circulo es: %lf", *pResultado);
getchar ();
system("pause");
system("cls");
break;
case 3:

	  system("cls");
      system("color D0");
      printf("Programa con vector 10 \n");
      for(i=0;i<10;i++)//llenado
      {
        p=vector +i;
        printf("teclea dato\t");
        scanf("%d", &*p);
      }
      for(i=0;i<10;i++)//Desplegado :o
      {
          p=vector+i;
          printf("\n %d",*p);
      }
      getchar ();
      system("pause");
      system("cls");
break;
default :
    if (opc==4)
        printf("\nAdios!!! :D");
    else
        printf("\nError :p");
    getchar ();
    getchar ();
    }
    }while (opc!=4);


}




