#include <stdio.h>

int main()
{
    
    int vetor[10];
    int x;
    
    //preenchimento do vetor
    for(x=0;x<10;x++){
        printf("Valor na posicao %d:",x);
        scanf("%d",&vetor[x]);
    }
    
    //impressao do vetor
    for(x=0;x<10;x++){
        printf("nValor inserido na posicao %d: %d",x,vetor[x]);
    }
    
    

    return 0;
}
