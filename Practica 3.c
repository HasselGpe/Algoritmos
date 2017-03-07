#include <stdio.h>
#include <windows.h>

int pila[20];
cola[20];
ind=0,idxc=0;
int borrar()

{
    if (ind==0) printf("Error Pila esta vacia");
    else {
           ind--;
           return pila[ind];
           }
}
int borrar_cola()
{   int m,n;
    if (idxc==0) printf("Error Cola esta vacia");
    else {
           m = cola[0];
           for (n=0;n<idxc-1;n++)
           cola[n]=cola[n+1];
           idxc--;
           return m;
           }
}
void insertar(int d)
{
     if (ind==20) {
         printf("Error Pila llena ");
         getch();
     }
     else {
       pila[ind]=d;
       ind++;
       }
 }
void insertar_c(int d)
{
     if (idxc==20) printf("Error Cola llena ");
     else {
       cola[idxc]=d;
       idxc++;
       }
 }

 int main()
 {
     int x=1,y,z,j;
     while (x!=0) {
           system("cls");
           system("color a0");
           printf(" MENU PILA \n\n\n");
           printf("1. Insertar pila \n");
           printf("2. Borrar en pila \n");
           printf("3. Listar pila \n\n");
           printf(" MENU COLA \n\n\n");
           printf("4. Insertar en cola \n");
           printf("5. Borrar en cola \n");
           printf("6. Listar cola \n");
           printf("0. Salir \n");
           scanf("%d",&x);
           switch(x)
           {
             case 1: printf("Solo se permiten 20 Digitos\n\n ");
                     printf("Digite su dato: ");
                     scanf("%d",&z);
                     insertar(z);
                     break;
             case 2: printf("DATO BORRADO: %d",borrar());
                     getch();
                     break;
             case 3: for (j=0;j<=ind-1; j++) printf("%d - ",pila[j]);
                     getch();
                     break;
             case 4: printf("Solo se permiten 20 Digitos\n\n ");
                     printf("Digite su dato: ");
                     scanf("%d",&z);
                     insertar_c(z);
                     break;
             case 5: printf("Dato borrado: %d",borrar_cola());
                     getch();
                     break;
             case 6: for (j=0;j<=idxc -1; j++)
                          printf("%d - ",cola[j]);
                     getch();
                     break;


           }
     }

}
