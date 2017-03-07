#include<stdio.h>
#include<windows.h>
#include<math.h>
//Función 3 parametros
float suma (float n, float m);
float resta (float n, float m);
float multiplicación (float n, float m);
float division (float n, float m);
float exponente (float n, float m);
float raiz (float n);
float cuadratica (float a, float b, float c);
int vector [15], (int i, int j );
int matriz [3][2], (int n,int m int ren, int col);
float area del circulo (float n);
void main()
{
	float a, b, c;
	char opc;
	system ("cls");
	system("color f0");
	printf("\n\n\t PROGRAMA QUE REALIZA MULTIPLES OPERACIONES :D\n\n ");
	getchar();
	do
	{
			system ("cls");
	        printf("<+> suma \n\n <-> resta \n\n<*> multiplica\n\n </> divide \n\n exponente <e> \n\n  raiz <r> \n\n  cuadratica <c>\n\n  vector <v> \n\n matriz<m>\n\n area del circulo <a>\n\n salir<s>\n\n ");
	        scanf ("%c", & opc);
	        switch(opc)
	        {
	        	case '+':
	        		system ("cls");
	        		system ("color a0");
	        		printf("dame el primer valor \n");
	        		scanf("%f", &a);
	        		printf("dame el segundo valor \n");
	        		scanf("%f", b);
	        		suma (a,b);
	        		printf("el resultado de la sumas es; %f",suma (a,b));

	        		break;

	            case '-':
	        		system ("cls");
	        		system ("color a0");
	        		printf("dame el primer valor \n");
	        		scanf("%f", &a);
	        		printf("dame el segundo valor \n");
	        		scanf("%f", b);
	        	    printf("el resultado de la resta es; %f",resta(a,b));
	        	break;
	        	case '*'
	        	system ("cls");
	        		system ("color a0");
	        		printf("dame el primer valor \n");
	        		scanf("%f", &a);
	        		printf("dame el segundo valor \n");
	        		scanf("%f", b);
	        	    printf("el resultado de la multiplicación es; %f",multiplicación(a,b));
	        	break;
	        	case '/'
	        	system ("cls");
	        		system ("color a0");
	        		printf("dame el primer valor \n");
	        		scanf("%f", &a);
	        		printf("dame el segundo valor \n");
	        		scanf("%f", b);
	        	    printf("el resultado de la division es; %f",division(a,b));
	        	break;
	        	case 'e'
	        	system ("cls");
	        		system ("color a0");
	        		printf("dame el valor de la base\n");
	        		scanf("%f", &a);
	        		printf("dame el valor del exponente \n");
	        		scanf("%f", b);
	        	    printf("el resultado es; %f",exponente(a,b));
	        	break;
	        	case 'r'
	        	system ("cls");
	        		system ("color a0");
	        		printf("dame el valor \n");
	        		scanf("%f", &a);
	        		if (a<0)
                        printf("el resultado es: %f i",raiz(a));
                    else
                        printf("el resultado es: %f ",raiz(a));
	        	break;
	        	case 'c'
	        	system ("cls");
	        		system ("color a0");
	        		printf("dame el valor de a \n");
	        		scanf("%f", &a);
	        		printf("dame el valor de b \n");
	        		scanf("%f", &b);
	        		printf("dame el valor de c \n");
	        		scanf("%f", &c);
	        		cuadratica(a,b,c);
	        	break;

	        	case 'v'
	        	system("cls");
                system("color b0");

	        	break;

	        	case 'm'
	        	system("cls");
                system("color 03");
                printf("\n Dame el numero de renglones: ");
                scanf("%d", &ren);
                printf("\n Dame el numero de columnas: ");
                scanf("%d", &col);
	        	break;

	        	case 'a'
	        	system ("color a0");
	        		printf("dame el valor de radio \n");
	        		scanf("%f", &a);

	        	break;
	        	getchar();
	        	getchar();
	        	}
	        	}while (opc!='s'&&ops!='S')

	        }



