#define NUM_ELEMENTOS 10
#include <stdio.h>

int main()
{
    
    int vetor[NUM_ELEMENTOS];
    int i,j,posmenor,temp;
    
    //preenchimento do vetor
    for(i=0;i<NUM_ELEMENTOS;i++){
        //printf("Valor na posicao %d:",i);
        //scanf("%d",&vetor[i]);
        vetor[i] = rand() % 1000;
        printf("%d ",vetor[i]);
    }
    
    //ordenando o vetor
    for(i=0;i<NUM_ELEMENTOS-1;i++){
        //inicia com a primeira posicao da busca
        posmenor=i;
        
        //busca o menor valor
        for(j=i;j<NUM_ELEMENTOS;j++){
            if(vetor[j]<vetor[posmenor]){
                posmenor=j;
            }
        }
        
        //faz a troca
        temp = vetor[i];
        vetor[i] = vetor[posmenor];
        vetor[posmenor] = temp;
    }
    
    //resultado
    //impressao do vetor ordenado
    printf("n");
    for(i=0;i<NUM_ELEMENTOS;i++){
        printf("%d ",vetor[i]);
    }

    return 0;
}