#include <stdio.h>
#include <windows.h>
#include <math.h>

int main() 
{
	int i,j;
	char palabra[30];
	system ("cls");
	system ("color f0");
	printf("Programa que pide una palabra y cuente de 7 a -7");
	printf("Desplegando la palabra y cuenta con histograma de *");
	system ("cls");
	system ("color e5");
	printf("Teclea una palabra:  ");
	scanf("%s", &palabra);
	
	for (i=7; i>=-7; i--)
	{
		printf("\n %d", i);
		
		for (j=0; j< abs (i); j++);
		printf("*");	
	}
	printf("\n %s",palabra);
	getchar();
	getchar();
}

	

