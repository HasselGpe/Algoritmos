//Programa que divide 2 digitos enteros
#include <stdio.h>
#include <windows.h>
int main()
{
	int digito1, digito2, resultado;
	system ("cls");
	system("color 97");
	printf("\n Programa que divide  2 digitos enteros");
	printf("\n Teclea el primer digito\n");
	scanf("%d",&digito1);
	printf("\n Teclea el segundo digito\n");
	scanf("%d",&digito2);
	resultado = digito1/digito2;
	printf("\n %d/%d=%d",digito1,digito2,resultado);
	
	getchar();
	}
