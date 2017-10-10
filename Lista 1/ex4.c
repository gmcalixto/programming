#include <stdio.h>

int main()
{

    int valor;
    int cedulas;

    printf("Insira o valor:");
    scanf("%d",&valor);
    
    if(valor >= 100){
        cedulas = valor/100;
        valor = valor % 100;
        
        printf("Cedulas de 100: %d\n",cedulas);
    }
    
    if(valor >= 50){
        cedulas = valor/50;
        valor = valor % 50;
        printf("Cedulas de 50: %d\n",cedulas);
    }
    
    if(valor >= 20){
        cedulas = valor/20;
        valor = valor % 20;
        printf("Cedulas de 20: %d\n",cedulas);
    }
    
    if(valor >= 10){
        cedulas = valor/10;
        valor = valor % 10;
        printf("Cedulas de 10: %d\n",cedulas);
    }
    
    if(valor >= 5){
        cedulas = valor/5;
        valor = valor % 5;
        printf("Cedulas de 5: %d\n",cedulas);
    }
    
    if(valor >= 1){
        printf("Cedulas de 1: %d\n",valor);
    }
    
    system("pause");

    return 0;
}
