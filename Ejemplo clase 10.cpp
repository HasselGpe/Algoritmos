
#include<stdio.h>
int main ()
{
	char var1, palabra[4];
	int vector [5],i,j,AZUL [3][4];
	printf("\nPrograma solo de ejemplo de arreglos");
	printf("\nteclea un caracter\t\t");
	scanf("%c",& var1);
	printf("\nteclea un caracter\t");
	scanf("%c",& palabra[1]);
	printf("\n teclea una palabra de maximo 4 caracteres\n\t\t");
	scanf("%s",& palabra);
	printf("\nteclea un dato tipo caracter entero\t\t");
	scanf("%d",& vector[0]);

for (i=0; i <5; i++)
{
	printf("\nTeclea en casilla [%d]",i);
	scanf("%d",&vector[i]); 
	//Despelgados
	printf("\n%c",var1);
	printf("\n%c",palabra[2]);
	printf("\n%s",palabra);
	printf("%d",vector[3]);
	for (i=0; i <5;i++)
	{
		printf("\n vector[%d]%d", i,vector[i]);
		printf("\nteclea dato en casilla 1,2");
		scanf("%d",& AZUL[1][2]);
		for(i=0; i <3; i++)
		for(j=0; j<4; j++)
		{
			printf("\n teclea dato [%d][%d]",i,j);
			scanf("%d",&AZUL [i][j]);
			
			}
				}
}
}
