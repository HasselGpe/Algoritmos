//Programa que realiza multiples operaciones
#include <stdio.h>
#include <Windows.h>
#include <math.h>
void main ()
{
    int opc;
    char Nombre[50];
    int RESULTADO;
    int digito1, digito2, digito3, digito4;
	float resultado;
	int Respuesta;
	double Resultado, radio;
	float b, h;
	const double pi=3.1416;
do
{
    printf ("\nMenu principal");
    printf("\n1.Nombre- ");
    printf("\n2.Operación Matematica-");
    printf("\n3.Perimetro Rectangulo-");
    printf ("\n4.Areas- ");
    printf ("\nEscoje opcion [1-4]\n");
    scanf ("%d",&opc);
    system("cls");
    switch (opc)
{
  case 1:
	system ("cls");
	system("color 20");
	printf("\n Cual es tu nombre\n");
	scanf("%s", &Nombre);
	printf("\n %s hola", Nombre);

	getchar ();

break;

case 2:
	system ("cls");
	system("color e0");
	printf("\n Programa que calcula la suma de 2 digitos enteros\n");
	printf("\n teclea el primer digito\n");
	scanf("%d", & digito1);
	printf("\n teclea el segundo digito\n");
	scanf("%d", & digito2);
	 RESULTADO = digito1+digito2;
	printf("\n %d+ %d=%d", digito1, digito2, RESULTADO);
break;
case 3:
	system ("cls");
	system("color 20");
	printf("\n Programa que calcula el perimetro de un rectangulo\n");
	printf("\n teclea el primer digito\n");
	scanf("%d", & digito1);
	printf("\n teclea el segundo digito\n");
	scanf("%d", & digito2);
	printf("\n teclea el tercer digito\n");
	scanf("%d", & digito3);
	printf("\n teclea el cuarto digito\n");
	scanf("%d", & digito4);
	 RESULTADO = digito1+digito2+digito3+digito4;
	printf("\n %d+ %d+%d+%d=%d", digito1, digito2,digito3,digito4, RESULTADO);
break;
case 4:
    printf("\n5.Area del triangulo- ");
    printf("\n6.Area del circulo-");
    printf("\n7.Area del rectangulo-");
    printf ("\n8.Area del cuadrado- ");
    printf ("\nEscoje la opción deseada [5-8]\n");
    scanf ("%d",&opc);
    system("cls");


    switch (opc) {


    case 5:
    system ("cls");
	system("color B0");
	printf("\n Programa que saca el area del triangulo\n");
	printf("\n teclea la base\n");
	scanf("%f", & b);
	printf("\n teclea la altura\n");
	scanf("%f", & h);
	resultado = b*h/2;
	printf("\n %f*%f/2=%f",b,h,resultado);

	break;
    case 6:

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
    break;

    case 7:

	system ("cls");
 	system ("color AF");
 	printf("\n\t\t Programa que calcula el area de un rectangulo");
 	printf("\n teclea la base\n");
	scanf("%f", & b);
	printf("\n teclea la altura\n");
	scanf("%f", & h);
	resultado = b*h;
	printf("\n %f*%f=%f",b,h,resultado);

    break;
    case 8:

	system ("cls");
 	system ("color 09");
 	printf("\n\t\t Programa que calcula el area de un cuadrado");
 	printf("\n teclea la base\n");
	scanf("%f", & b);
	printf("\n teclea la altura\n");
	scanf("%f", & h);
	resultado = b*h;
	printf("\n %f*%f=%f",b,h,resultado);
    break;

    }
    }

    {
        printf ("Opcion invalida!!");
    system ("pause");
    system ("cls");

    }
}while (opc!=4);

}


