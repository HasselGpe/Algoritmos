#include<stdio.h>
#include<windows.h>
#include<math.h>
//Función 3 parametros
float suma (float n, float m);
float resta (float n, float m);
float multiplicacion (float n, float m);
float division (float n, float m);
float exponente (float n, float m);
float raiz (float n);
void func_cuadratica ();
void func_vector()
void func_matriz();
void circulo ();
void main()
{
	float m,n;
	int opc;
	system ("cls");
	system("color f0");
	printf("\n\n\t PROGRAMA QUE REALIZA MULTIPLES OPERACIONES :D\n\n ");
	getchar();
	do
	{
			system ("cls");
	        printf("1 suma \n\n");
			printf("2 resta \n\n);
			printf("3 multiplica\n\n");
			printf("4 Division\n\n");
			printf("5 exponente\n\n");
			printf("6  raiz\n\n");
			printf("7  cuadratica\n\n");
			printf("8 vector\n\n");
			printf("9 matriz\n\n");
			printf("10 area del circulo\n\n");
			printf("11 salir\n\n ");
	        scanf ("%d", & opc);
	        switch(opc)
	        {
	        	case 1 :
	        		system ("cls");
	        		system ("color a0");
	        		printf("dame el primer valor \n");
	        		scanf("%f", &a);
	        		printf("dame el segundo valor \n");
	        		scanf("%f", b);
	        		suma (a,b);
	        		printf("el resultado de la sumas es; %f",suma (a,b));

	        		break;

	            case 2:
	        		system ("cls");
	        		system ("color a0");
	        		printf("dame el primer valor \n");
	        		scanf("%f", &a);
	        		printf("dame el segundo valor \n");
	        		scanf("%f", b);
	        	    printf("el resultado de la resta es; %f",resta(a,b));
	        	break;
	        	case 3:
	        	system ("cls");
	        		system ("color a0");
	        		printf("dame el primer valor \n");
	        		scanf("%f", &a);
	        		printf("dame el segundo valor \n");
	        		scanf("%f", b);
	        	    printf("el resultado de la multiplicación es; %f",multiplicacion(a,b));
	        	break;
	        	case 4:
	        	system ("cls");
	        		system ("color a0");
	        		printf("dame el primer valor \n");
	        		scanf("%f", &a);
	        		printf("dame el segundo valor \n");
	        		scanf("%f", b);
	        	    printf("el resultado de la division es; %f",division(a,b));
	        	break;
	        	case 5:
	        	system ("cls");
	        		system ("color a0");
	        		printf("dame el valor de la base\n");
	        		scanf("%f", &a);
	        		printf("dame el valor del exponente \n");
	        		scanf("%f", b);
	        	    printf("el resultado es; %f",exponente(a,b));
	        	break;
	        	case 6:
	        	system ("cls");
	        		system ("color a0");
	        		printf("dame el valor \n");
	        		scanf("%f", &a);
	        		if (a<0)
                        printf("el resultado es: %f i",raiz(a));
                    else
                        printf("el resultado es: %f ",raiz(a));
	        	break;
	        	case 7:
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

	        	case 8:
	        	system("cls");
                system("color b0");

                {
            printf ("\n Teclea el dato en indice: [%d]",i);
            scanf("%d",&v[i]);
        }
        printf ("\n\n\n\n El dato y su histograma: \n  ");
       {
        printf ("\n Dato en indice [%d] %d",i,v[i]);
       }
   {
        printf ("*");
            }
        printf("\n");
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
	        	system ("cls");
 	            system ("color 07");
                printf("\n\nteclea el radio y presiona enter");
 	            scanf("%lf", &n);
                printf("\n\nel area del circulo es: %lf", n);
	        	break;

	        	getchar();
	        	getchar();
	        	}
	        	}while (opc!='s'&&ops!='S')

	        }

float suma (float n, float m);
{
printf("el resultado de la suma es:%f",n+m)
return 0;
}
float resta (float n, float m);
{
return n-m
}
float multiplicacion(float n, float m);
{
  return n*m
}
float division (float n, float m);
{
    return n/m
}

float exponente (float n, float m);

{
    return pow(n,m)
}
float raiz (float n);
{
    if (n <0)
        return sqrt(n*-1);
     else
        return sqrt(n);
}

float cuadratica (float a, float b, float c);
{
    double d, x1, x2;
    system("cls");
    if (a==0)
        {
        printf("\n error el valor de a no puede ser 0\n");
        return 0;
    }
    d=pow (b,2)-(4*a*c);
    if (d==0)
    {
        x1 = x2 = (-b)/(2*a);
        printf("\n x1 = x2 = %lf",x1);

    }
    else if (d > 0)
    {
    x1=(-b+(sqrt(d)))/(2*a);
    x2=(-b-(sqrt(d)))/(2*a);
    printf("\n x1=%lf",x1);
      printf("\n x1=%lf",x2);
     }
    else {
        x1=(-b+sqrt(d*(-1)))/(2*a);
          x2=(-b-sqrt(d*(-1)))/(2*a);
          printf("\n x1=%lf",x1);
      printf("\n x1=%lf",x2);
    }
    return 0;
}

int funcion_vector(int x[7]);
{
for(i=1; i<=7; i++)
 for(i=1; i<=7; i++)
for(j=0; j<vector[i]; j++)

}

int funcion_matriz()
{
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
return 0;
}

float area del circulo (float n);

{
n= pi*pow(radio,2);


}

