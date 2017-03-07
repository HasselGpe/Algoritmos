#include<stdio.h>
#include<windows.h>
#include<math.h>
int main()
{
    int opc,auxiliar=0;
    char *cadena="parangaricutirimicuaro";
    int i,j,v[7],*p;
    do
    {
       system("cls");
       system("color f5");
       printf("1)  Contabilizacion de la palabra!PARANGARICUTIRIMICUARO! \n");
       printf("2)  vector tamano 7 con caracter elevado al cuadrado e histograma \n");
       printf("3)  Salir\n");
       printf("Elije una opcion:");
       scanf("%d",&opc);
                switch(opc)
                    {
                case 1:
                        system("cls");
                        system("color 90");
                        printf("Tu opcion fue Contabilizacion de la palabra!PARANGARICUTIRIMICUARO! : \n");
                        while(*cadena!='\0')
                        {
                            auxiliar=auxiliar+1;
                            cadena++;
                        }
                        printf(" \nEl numero de caracteres son: \t%d",auxiliar);
                        getchar();
                        getchar();
                break;
                case 2:
                        system("cls");
                        system("color 60");
                        printf("Tu opcion fue vector tamano 7 con caracter elevado al cuadrado e histograma:\n");
                        for(i=0;i<7;i++)
                        {
                            p=v+i;
                                printf("\n\nteclea caracter:");
                                scanf("%d",&*p);
                        }
                        for(i=0;i<7;i++)
                        {
                              p=v+i;
                                printf("\nvector [%d]:%d",i,*p);
                        }
                        getchar();
                        getchar();
                        system("cls");
                        system("color 1f");
                        printf("vector elevado al cuadrado\n\n");
                        for(i=0;i<7;i++)
                        {
                            p=v+i;
                            *p=*p**p;
                        }
                        for(i=0;i<7;i++)
                        {
                            p=v+i;
                                printf("\n nuevo vector elevado al cuadrado[%d]:%d",i,*p);
                            for(j=0;j<*p;j++)
                            {
                                printf("*");
                            }
                        }
                        getchar();
                        getchar();
                break;

                case 3:
                        printf("salir \n\n");
                break;
                default:
                     printf("esa opcion no existe \n\n");
                     }    getchar();

   }while(opc!=3);
}

