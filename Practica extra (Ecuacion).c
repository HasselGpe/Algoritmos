#include <stdio.h>
#include <Windows.h>
#include <math.h>
#include<stdlib.h>
int main ()
{
float a,b,c,d,x1,x2;
system ("cls");
system("color e0");
printf("\n Programa que resuelve la funcion esplicita de ax^2+bx+c\n");
	printf("\n teclea a\n");
	scanf("%f", & a);
if(a==0) {
printf("El valor de a no puede ser cero");
 printf("\n\nEl proceso finalizara, Presione enter");
 return 0;
}
printf("Dame el valor para la variable b: ");
 scanf("%f", &b);
 printf("Dame el valor para la variable c: ");
 scanf("%f", &c);

 d = pow(b,2)-(4*(a*c));
 system("cls");

if(d>0)
{
    x1=(-b+(sqrt(d)))/(2*a);
    x2=(-b-(sqrt(d)))/(2*a);
    printf("El valor para X1 es: %.2lf", x1);
     printf("\nEl valor para X2 es: %.2lf\n", x2);
     system("pause");
     }

    else if (d==0)
{
    x1=x2=(-b)/(2*a);
    printf("El valor para X1 y X2 es: %.2lf, x1");
    system("pause");
    }


    else {
        x1=(-b+sqrt(abs(d)))/(2*a);
         x2=(-b-sqrt(abs(d)))/(2*a);
         printf("El valor para X1 es: %.2lf i", x1);
         printf("\nEl valor para X2 es: %.2lf i\n", x2);
         system("pause"); }



		system("cls");
}


