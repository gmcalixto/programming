#include <stdio.h>

//assinatura das funções
int soma(int a, int b);
int somavetor(int num,int vetor[num]);
int somamatriz(int linhas,int colunas,int matriz[linhas][colunas]);


int main()
{
    int a=10,b=10, vetor[5] = {1,1,1,1,1}, matriz[2][2] = {{2,2},{2,2}};
    
    printf("Soma de %d e %d = %d",a,b,soma(a,b));
    printf("nSoma do vetor = %d",somavetor(5,vetor));
    printf("nSoma da matriz = %d",somamatriz(2,2,matriz));
    
    
    return 0;
}

//implementação das funções

int soma(int a, int b){
    return a+b;
}

int somavetor(int num,int vetor[num]){
    int i,soma;
    for(i=0;i<num;i++){
        soma+=vetor[i];
    }
    return soma;
}

int somamatriz(int linhas,int colunas,int matriz[linhas][colunas]){
    int i,j,soma;
    
    for(i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            soma+=matriz[i][j];
        }
    }
    return soma;
}