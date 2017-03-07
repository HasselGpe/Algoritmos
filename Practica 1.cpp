#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
    int opc;
    FILE *archdisco;
	struct libros
    {
        char Titulo [20];
        char Autor [20];
        char Editorial[10];
        int Fecha;

    }libro;

    system("cls");
    system("color 71");
    printf("\n \t Bienvenido a la Biblioteca personal\n");
    printf("\n Presione Enter para acceder a las opciones \n\n");
    system("pause");
    do
    {
       system("cls");
        system("color D1");
        printf(" \n -1 Solicitar Alta de un libro");
        printf("\n -2 Leer de Libros dados de alta");
        printf("\n -3 salir\n");
        scanf("%d", &opc);
        switch(opc)
        {
       case 1:
            system("cls");
            printf(" \n Solicitar Alta de un libro\n");
			getchar();
         printf("\nTeclea Titulo:");
        scanf("%s",&libro.Titulo);
         printf("\nTeclea Autor:");
        scanf("%s",&libro.Autor);
         printf("\nTeclea Editorial:");
        scanf("%s",&libro.Editorial);
       printf("\nteclea Fecha de publicacion:");
        scanf("%d",&libro.Fecha);
        FILE *archdisco;
                archdisco = fopen("D:\\grupo.txt","at+");
                fwrite(&libro,sizeof(libro),1,archdisco);
                fclose(archdisco);
                printf("\n Libro registrado\n");
        getchar();
        getchar();
break;
        case 2:
         system("cls");
    printf(" Información de Libros dados de alta");
    system("cls");
            printf(" -> Lectura de libro");
            archdisco = fopen("D:\\grupo.txt","at+");
            while(fread(&libro,sizeof(libro),1,archdisco)==1)

 printf("\nLos Libros son:");
        printf("\n Titulo: %s",&libro.Titulo);
        printf("\nAutor:%s",&libro.Autor);
        printf("\nEditorial:%s",&libro.Editorial);
        printf("\nFecha de Publicacion:\n",&libro.Fecha);
        system("pause");
break;
       case 3:
                system ("cls");
 	            system ("color 07");
                printf("\n\nSaliendo del programa\n\n");
	        	getchar();
	        	getchar();
	        	break;
}
	        	}while (opc!=3);
	        	 getchar();

	        }
