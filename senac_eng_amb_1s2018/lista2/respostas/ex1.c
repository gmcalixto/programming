#include <stdio.h>

int main()
{
    int vetor[20],i;
    
    //prenchendo o vetor dinamicamente
    for(i=0;i<20;i++){
        vetor[i] = rand() % 100;
    }
    
    //verificando se cada posição tem valor par ou ímpar
    for(i=0;i<20;i++){
        if(vetor[i] % 2){
            printf("Impar: %d, pos %d\n",vetor[i],i);
        }
        else{
            printf("Par: %d, pos %d\n",vetor[i],i);
        }
    }

    
    return 0;
}