#include<stdio.h>
#include<windows.h>
int main()
{
int A[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int inf,sup,mit,dato,n=20;
system("color 9f");
printf("\n \t dame un dato a buscar\n");
scanf("%d",&dato);
inf=0;
sup=n;
while (inf<=sup)
{
mit=(inf+sup)/2;
if (A[mit]==dato)
{
printf("dato %d encontrado posicion %d",dato,mit);
break;
}
if (A[mit]>dato)
{
sup=mit;
mit=(inf+sup)/2;
}
if (A[mit]<dato)
{
inf=mit;
mit=(inf+sup)/2;
}

}
return 0;
}
