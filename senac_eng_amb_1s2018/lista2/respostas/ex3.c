#include <stdio.h>

int main()
{
    int matriz [3][3],i,j;
    
    //preenchendo a matriz
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            matriz[i][j]=rand()%100;
        }
    }
    
    //matriz inicial
    printf("Original\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    //matriz transposta
    printf("Transposta\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}