#include <stdio.h>
#include <windows.h>

main()
{
    int opc;
    struct grupo
    {
        char nombre [10];
        char apellidos [30];
        int matricula;
        float caliF;
        float caliB;
        float lab;
        float part;
    };
    struct grupo alumno,*alu;
    alu=&alumno;
    system("cls");
    system("color A1");
    printf("\n \tRegistro\n");
    printf("\n Presione Enter para acceder a las opciones de registro\n\n");
    system("pause");
    do
    {
       system("cls");
        printf(" \n -1 llena un registro nuevo");
        printf("\n -2 despliega el registro");
        printf("\n -3 salir\n");
        scanf("%d", &opc);
        switch(opc)
        {
       case 1:
            system("cls");
            printf(" implementacion de registro\n");
			getchar();
         printf("\nteclea nombre:");
        scanf("%s",&alumno.nombre);
         printf("\nteclea apellidos:");
        scanf("%s",&alumno.apellidos);
         printf("\nteclea matricula:");
        scanf("%i",&alumno.matricula);
       printf("\nteclea calificacion Bimestral:");
        scanf("%f",&alumno.caliB);
        printf("\nteclea calificacion final:");
        scanf("%f",&alumno.caliF);
        printf("\nteclea calificacion de Laboratorio:");
        scanf("%f",&alumno.lab);
        printf("\nteclea calificacion de participacion:");
        scanf("%f",&alumno.part);
        getchar();
        getchar();
break;
        case 2:

     system("cls");
    printf(" despplegado de registro");

        printf("\nlos datos son:");
        printf("\nel nombre es: %s",alumno.nombre);
        printf("\nlos apellidos son:%s",alumno.apellidos);
        printf("\nLa matricula es:%d",alumno.matricula);
        printf("\nla calificacion Bimestral es:%.2f",alumno.caliB);
        printf("\nla calificacion Final es:%.2f",alumno.caliF);
        printf("\nla calificacion de Laboratorio es:%.2f",alumno.lab);
         printf("\nla calificacion en Participaciones es:%.2f\n",alumno.part);
        system("pause");
break;
case 3:system ("cls");
 	            system ("color 07");
                printf("\n\nSaliendo del programa\n\n");
	        	getchar();
	        	getchar();
	        	break;
}
	        	}while (opc!=3);
	        	 getchar();

	        }
