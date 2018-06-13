#include <stdio.h>

int main()
{
    int matriza[4][4],matrizb[4][4],matrizr[4][4],i,j,k;
    
    //preenchendo a matriz
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            matriza[i][j]=rand()%100;
            matrizb[i][j]=rand()%100;
        }
    }
    
    //matriz a
    printf("A\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ", matriza[i][j]);
        }
        printf("\n");
    }
    
    //matriz b
    printf("B\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ", matrizb[i][j]);
        }
        printf("\n");
    }
    
    
    //multiplicacao da matriz A e B
    for (i = 0; i < 4; i++)
           {
               for (j = 0; j < 4; j++)
               {
                   matrizr[i][j] = 0;
                   for (k = 0; k < 4; k++)
                       matrizr[i][j] += matriza[i][k] * matrizb[k][j];
               }
           }
    
    //matriz a*b
    printf("A*B\n");
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d ", matrizr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}