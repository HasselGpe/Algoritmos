#include <stdio.h>
#include <windows.h>
int Encontrar, encontrado, i;
int a[4] = {3,1,2,4};
main(){
    system("color f9");
    printf("\n \n Escriba un numero:\n\n");
    scanf("%d", &Encontrar);
    printf("Usted ingreo %d\n",Encontrar);
    encontrado = 0;
    for (i=0;i<4;i++){
        if (a[i] == Encontrar){
            encontrado =1;
        }
    }
    if(encontrado==1){
        printf("Numero encontrado!");
    }else{
        printf("Numero no encontrado!\nLista de Numeros ");
        for (i=0; i<4; i++){
            (i<3)?printf("%d, ",a[i]):printf("%d.",a[i]);
        }
    }
    getchar();
    return 0 ;
}

