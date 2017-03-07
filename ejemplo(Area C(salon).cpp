//Programa que calcula el area de un circulo
#include <stdio.h>
#include <windows.h>
#include <math.h>

 int main()
 {
 	double resultado, radio;
 	const double pi=3.1416;
 	system ("cls");
 	system ("color 07");
 	printf("\n\t\t Programa que calcula el area de un circulo");
 	getchar ();
 	
 	system ("cls");
 	system ("color 97");
 	printf("\n\nteclea el radio y presiona enter");
 	scanf("%lf", &radio);
 	resultado= pi*pow(radio,2);
 	printf("\n\nel area del circulo es: %lf", resultado);
 	
 	
 	getchar();
	 getchar(); 	
 }
