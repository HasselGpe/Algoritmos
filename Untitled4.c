#include <stdio.h>
#include <windows.h>
#include <math.h>



int main()
{
    int opc, i, j, vector[50];
    int  m, n, mat[3][2], ren, col, cn = 1, x[15];

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
}
