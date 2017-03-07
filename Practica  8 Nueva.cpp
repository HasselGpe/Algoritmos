#include<stdio.h>
#include<windows.h>
#include<math.h>

float func_suma (float n, float m);
float func_resta (float n, float m);
float func_multiplicacion (float n, float m);
float func_division (float n, float m);
float func_potencia (float n, float m);
void func_vector();
void func_ecuacion();
void func_matriz();
void func_circulo ();

int main()

{
	float n,m;
	int opc;
	system ("cls");
	system("color f0");
	printf("\n\n\t PROGRAMA QUE REALIZA MULTIPLES OPERACIONES :D\n\n ");
	getchar();
	do
	{
			system ("cls");
	        printf("[1] suma \n\n");
			printf("[2] resta \n\n");
			printf("[3] multiplica\n\n");
			printf("[4] Division\n\n");
			printf("[5] potencia\n\n");
			printf("[6] vector\n\n");
			printf("[7] ecuacion\n\n");
			printf("[8]matriz\n\n");
			printf("[9] circulo\n\n");
			printf("[10] salir\n\n ");
	        scanf ("%d", & opc);
	        switch(opc)
	        {
	        	case 1 :
	        		system ("cls");
	        		system ("color a0");
	        		printf("dame el primer valor \n");
	        		scanf("%f", &n);
	        		printf("dame el segundo valor \n");
	        		scanf("%f", m);
	        		printf("el resultado de la sumas es; %.2f",func_suma (n,m));
	        		 getchar();
	        		  getchar();

	        		break;

	            case 2:
	        		system ("cls");
	        		system ("color a0");
	        		printf("dame el primer valor \n");
	        		scanf("%f", &n);
	        		printf("dame el segundo valor \n");
	        		scanf("%f", m);
	        	    printf("el resultado de la resta es; %.2f",func_resta(n,m));
	        	     getchar();
	        	      getchar();
	        	break;
	        	case 3:
	        	system ("cls");
	        		system ("color a0");
	        		printf("dame el primer valor \n");
	        		scanf("%f", &n);
	        		printf("dame el segundo valor \n");
	        		scanf("%f", m);
	        	    printf("el resultado de la multiplicación es; %.2f",func_multiplicacion(n,m));
	        	     getchar();
	        	      getchar();
	        	break;
	        	case 4:
	        	system ("cls");
	        		system ("color a0");
	        		printf("dame el primer valor \n");
	        		scanf("%f", &n);
	        		printf("dame el segundo valor \n");
	        		scanf("%f", m);
	        	    printf("el resultado de la division es; %.2f",func_division(n,m));
	        	    getchar();
	        	     getchar();
	        	break;
	        	case 5:
	        	system ("cls");
	        		system ("color a0");
	        		printf("dame el valor a elevar\n");
	        		scanf("%f", &n);
	        		printf("dame la potencia \n");
	        		scanf("%f", m);
	        	    printf("el resultado es; %.2f",func_potencia(n,m));
	        	     getchar();
	        	      getchar();
	        	break;
	        	case 6:

	        func_vector();
	         getchar();
	          getchar();
	        	break;

	        	case 7:

	        	func_ecuacion();
	        	 getchar();
	        	  getchar();
	        	break;

	        	case 8:

	        func_matriz();
	         getchar();
	          getchar();
	        	break;

	        	case 9:
	        	func_circulo();
				 getchar();
				  getchar();

	        	break;

	        	case 10:
	        	system ("cls");
 	            system ("color 07");
                printf("\n\nSaliendo del programa\n\n");
	        	getchar();
	        	getchar();
	        	break;

	        	}
	        	}while (opc!=10);
	        	 getchar();

	        }

float func_suma (float n, float m)

{
    float Resultado;
	Resultado=n+m;
    return  Resultado;
}

float func_resta (float n, float m)
{
    float Resultado;
	Resultado=n-m;
    return Resultado;
}
float func_multiplicacion(float n, float m)
{
  float Resultado;
	Resultado=n*m;
    return Resultado;
}
float func_division (float n, float m)
{
    float Resultado;
	Resultado=n/m;
    return Resultado;
}

float func_potencia (float n, float m)

{
	float i, Resultado=1;
	for(i=0; i<m; i++)
    {
    	Resultado=Resultado*n;
	}
	return Resultado;
}
void func_vector()
{
    int i,j, Vector[7];
    system("cls");
    system("color c0");
    printf("\n Vector de 7 de numeros enteros, que muestren histograma\n\n");
   //
    for(i=0; i<7; i++) {
    	printf("ingrese el numero para [%d]: ",i+1);
    	scanf("%d",&Vector[i]);
	}
	system("cls");
	printf("\n");
	//
	for (i=0; i<7; i++) {
		printf("\t[%d]\t --> %d\t",i+1,Vector[i]);
		 for(j=0; j<Vector[i]; j++)
		 printf("*");
		 printf("\n");
	}
}

void func_ecuacion()

{
   float a,b,c,d,x1,x2;
system ("cls");
system("color e0");
printf("\n Programa que resuelve la funcion esplicita de ax^2+bx+c\n");
	printf("\n teclea a\n");
	scanf("%f", & a);
if(a==0) {
printf("El valor de a no puede ser cero");
 printf("\n\nEl proceso finalizara, Presione enter");

}
printf("Dame el valor para la variable b: ");
 scanf("%f", &b);
 printf("Dame el valor para la variable c: ");
 scanf("%f", &c);

 d = pow(b,2)-(4*(a*c));
 system("cls");

if(d>0)
{
    x1=(-b+(sqrt(d)))/(2*a);
    x2=(-b-(sqrt(d)))/(2*a);
    printf("El valor para X1 es: %.2lf", x1);
     printf("\nEl valor para X2 es: %.2lf\n", x2);
     system("pause");
     }

    else if (d==0)
{
    x1=x2=(-b)/(2*a);
    printf("El valor para X1 y X2 es: %.2lf, x1");
    system("pause");
    }


    else {
        x1=(-b+sqrt(abs(d)))/(2*a);
         x2=(-b-sqrt(abs(d)))/(2*a);
         printf("El valor para X1 es: %.2lf i", x1);
         printf("\nEl valor para X2 es: %.2lf i\n", x2);
         system("pause"); }



		system("cls");
}
void func_matriz()
{
	int i,j;
	int matriz[3][2];
	system ("cls");
	printf("\nIngresa los valores para la matriz de 3x2");
    for(i=0;i<3;i++)
       for(j=0;j<2;j++)
                {
                printf("\n Teclea el dato para [%d][%d]: ", i,j);
                scanf("%d", &matriz[i][j]);
                }
                printf("\nTu Matriz es: \n");
                for (i=0;i<3;i++)
                {

                for (j=0;j<2;j++)
                printf("[%d]",matriz[i][j]);
                printf("\n");
        }
}

void func_circulo()
{
double r,c, pi=3.1416;
system("cls");
printf("\n Ingresa el valor del radio:");
scanf("%lf",&r);
c=pi*pow(r,2);
printf("El resultado es: %lf",c);

}


