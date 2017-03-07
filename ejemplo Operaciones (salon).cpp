//Programa que realiza multiples operaciones 
#include <stadio.h>
#include <Windows.h>
int main ()
{
	int digito1, digito2, resultado;
	system ("cls");
	system("color e0");
	printf("\n Programa que calcula la suma de 2 digitos enteros");
	printf("\n teclea el primer digito");
	scanf("%d", & digito1);
	printf("\n teclea el segundo digito");
	scanf("%d", & digito2);
	resultado = digito1+digito2;
	printf("\n %d+ %d=%d", digito1, digito2,resultado);

	getchar();

	int digito1, digito2, resultado;
	system ("cls");
	system("color e8");
	printf("\n Programa que calcula la resta de 2 numeros enteros");
	printf("\n teclea el primer digito");
	scanf("%d", & digito1);
	printf("\n teclea el segundo digito");
	scanf("%d", & digito2);
	resultado = digito1-digito2;
	printf("\n %d- %d=%d", digito1, digito2,resultado);

	getchar();

}

