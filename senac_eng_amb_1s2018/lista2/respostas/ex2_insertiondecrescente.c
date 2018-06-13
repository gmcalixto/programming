#include <stdio.h>

int main()
{
    int vetor[20],i,j,atual;
    
    //prenchendo o vetor dinamicamente
    for(i=0;i<20;i++){
        vetor[i] = rand() % 100;
    }
    
    //vetor inicial
    printf("Inicial: ");
    for(i=0;i<20;i++){
        printf("%d ",vetor[i]);
    }
    
    //ordenação por insertionsort crescente

    for (i = 1; i < 20; i++) {
		atual = vetor[i];
		

		for (j = i - 1; (j >= 0) && (atual > vetor[j]); j--) {
			vetor[j + 1] = vetor[j];
        }

		vetor[j+1] = atual;
	}
    
    printf("\nBubblesort: ");
    for(i=0;i<20;i++){
        printf("%d ",vetor[i]);
    }
    
    return 0;
}