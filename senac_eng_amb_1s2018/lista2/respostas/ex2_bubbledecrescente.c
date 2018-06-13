#include <stdio.h>

int main()
{
    int vetor[20],i,j,aux;
    
    //prenchendo o vetor dinamicamente
    for(i=0;i<20;i++){
        vetor[i] = rand() % 100;
    }
    
    //vetor inicial
    printf("Inicial: ");
    for(i=0;i<20;i++){
        printf("%d ",vetor[i]);
    }
    
    //ordenação por bubblesort decrescente

    for (i = 1; i < 20; i++) {
        for (j = 0; j < 19; j++) {
            if (vetor[j] < vetor[j + 1]) {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
    
    printf("\nBubblesort: ");
    for(i=0;i<20;i++){
        printf("%d ",vetor[i]);
    }
    
    return 0;
}