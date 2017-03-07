#include <iostream>
#include <stdio.h>
#include <windows.h>

using namespace std;

int main()
{
    int opc, i, j, vector[30], m, n, mat[50][50], ren, col, cn = 1, x[15];
    char tx[30]
;    do{
    system("cls");
    system("color fd");
    printf("\t\tPractica 4\n\n");
    printf("1. Vector con 30 Caracteres: \n");
    printf("2. Vector tamaño 15 con histograma: \n");
    printf("3. Matriz 50 x 50: \n\n");
    printf("\tElige una opcion [1-3]");
    scanf("%d", &opc);
    switch(opc)
    {
       case 1:
             system("cls");
             system("color e0");
             printf("\n Escriba una frase: ");
             scanf("%s", &tx);
             system("cls");
             printf("\n frase:\t %s", tx);
             printf("\n");
             system("pause");
             break;

        case 2:
        system("cls");
        system("color b0");
        for(i=1; i<=15; i++)
        {
            printf ("\n Teclea el dato en indice: [%d]",i);
            scanf("%d",&x[i]);
        }
        printf ("\n\n\n\n El dato y su histograma: \n  ");
        for(i=1; i<=15; i++)
        {
        printf ("\n Dato en indice [%d] %d",i,x[i]);
        for(j=0; j<x[i]; j++)
            {
        printf ("*");
            }
        printf("\n");
        }
        system("pause");
        break;
        case 3:
            system("cls");
            system("color 03");
            printf("\n Dame el numero de renglones: ");
            scanf("%d", &ren);
            printf("\n Dame el numero de columnas: ");
            scanf("%d", &col);
            for(m=1;m<=ren;m++)
            {
                for(n=1;n<=col;n++)
                {
                printf("\n [%d][%d]: ", m, n);
                scanf("%d", &mat[m][n]);
                }
                printf("\n");
            }
            system("cls");
            for(m=1;m<=ren;m++)
            {
                for(n=1;n<=col;n++)
                {
                printf(" [%d][%d]: %d \t", m, n, mat[m][n]);
                }
                printf("\n");
                }
                printf("\n");
                system("pause");
                break;
                
    }
    }while(opc<4);
}
