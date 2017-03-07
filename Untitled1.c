//Programa que realiza multiples operaciones
#include <stdio.h>
#include <Windows.h>
#include <math.h>
int main ()
{
	int digito1, digito2;
	float resultado;
	float b, h, pi=3.1416;
	system ("cls");
	system("color e0");
	printf("\n Programa que calcula la suma de 2 digitos enteros\n");
	printf("\n teclea el primer digito\n");
	scanf("%d", & digito1);
	printf("\n teclea el segundo digito\n");
	scanf("%d", & digito2);
	resultado = digito1+digito2;
	printf("\n %d+ %d=%d", digito1, digito2,resultado);

	getchar();
	getchar();

	system ("cls");
	system("color B0");
	printf("\n Programa que calcula la resta de 2 numeros enteros\n");
	printf("\n teclea el primer digito\n");
	scanf("%d", & digito1);
	printf("\n teclea el segundo digito\n");
	scanf("%d", & digito2);
	resultado = digito1-digito2;
	printf("\n %d- %d=%d", digito1, digito2,resultado);

	getchar();
	getchar();

	system ("cls");
	system("color 50");
	printf("\n Programa que multiplica 2 numeros enteros\n");
	printf("\n teclea el primer digito\n");
	scanf("%d", & digito1);
	printf("\n teclea el segundo digito\n");
	scanf("%d", & digito2);
	resultado = digito1*digito2;
	printf("\n %d* %d=%d", digito1, digito2,resultado);

	getchar();
	getchar();

	system ("cls");
	system("color 70");
	printf("\n Programa que divide 2 numeros enteros\n");
	printf("\n teclea el primer digito\n");
	scanf("%d", & digito1);
	printf("\n teclea el segundo digito\n");
	scanf("%d", & digito2);
	resultado = digito1/digito2;
	printf("\n %d/ %d=%d", digito1, digito2,resultado);

	getchar();
	getchar();

	system ("cls");
	system("color B0");
	printf("\n Programa que saca el area del triangulo\n");
	printf("\n teclea la base\n");
	scanf("%f", & b);
	printf("\n teclea la altura\n");
	scanf("%f", & h);
	resultado = b*h/2;
	printf("\n %f*%f/2=%f",b,h,resultado);

	getchar();
	getchar();

	system ("cls");
	system("color c0");
	printf("\n Programa que calcula el area del circulo\n");
	printf("\n teclea el primer digito\n");
	scanf("%d", & digito1);
	printf("\n teclea el segundo digito\n");
	scanf("%d", & digito2);
	resultado = digito1-digito2;
	printf("\n %d- %d=%d", digito1, digito2,resultado);
}

