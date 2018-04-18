/******************************************************************************

Avaliação 1 
Exercício 3

*******************************************************************************/

#include <stdio.h>

int main()
{
    int valor,sobra;
    
    printf("Informe o valor do saque: ");
    scanf("%d",&valor);
    
    if(valor%50 == 0){
        if(valor >= 100){
            printf("%d cedulas de 100",valor/100);
            sobra = valor%100;
        }
        if(sobra >= 50 || valor == 50){
            printf("\n1 cedula de 50");
        }
    }
    else{
        printf("Impossivel de sacar todo o valor");
    }
    
    return 0;
}