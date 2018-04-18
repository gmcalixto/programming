#include <stdio.h>

int main()
{
    int valorSerie=1,valorFinal,soma=0;
    
    printf("Digite o valor final da série: ");
    scanf("%d",&valorFinal);
    
    while(valorSerie<=valorFinal){
        soma=soma+valorSerie;
        valorSerie++;
    }
    
    printf("Soma dos numero de 1 a %d = %d",valorFinal,soma);
    
    return 0;
}