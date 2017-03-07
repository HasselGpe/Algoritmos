#include <stdio.h>
#include <Windows.h>
#include <math.h>
int main ()
{
int i,j,opc;

do
{
    printf ("\nMenu principal");
    printf("\n1.cuenta de -15 a 15 ");
    printf("\n2.cuenta de 10 a 0 con histograma-");
    printf("\n3.cuenta de-1 a 12-");
    printf ("\nEscoje opcion [1-3]\n");
    scanf ("%d",&opc);
    system("cls");
    switch (opc)
{
  case 1:
	system ("cls");
	system("color 20");
	for(i=-15;i<=15;i++)
printf("\n%d", i);
printf("\nFin\n\n");

	getchar ();
    system ("pause");
    system("cls");

break;

case 2:
	system ("cls");
	system("color e0");
	for(i=10;i>=0;i--){
printf("\n%d", i);
for(j=0;j<i;j++)
printf("*");
}
getchar ();
    system ("pause");
    system("cls");
break;
case 3:
	system ("cls");
	system("color 20");
	while(+i<=12)

{
printf("\n%d",i);
i++;

}
printf("\nFin");
 getchar ();
    system ("pause");
    system("cls");
break;

    }
    {
        printf ("Opcion invalida!!");
    system ("pause");
    system ("cls");

    }
}
while (opc!=3);

}


