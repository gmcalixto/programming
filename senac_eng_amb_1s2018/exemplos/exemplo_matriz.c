#include <stdio.h>

int main()
{
    int matriz[3][3];
    int i,j;
    
    //preenchendo os elementos da matriz
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Insira um numero na posicao %d,%d: ",i,j);
            scanf("%d",&matriz[i][j]);
        }    
    }
    
    //imprimindo os elementos da matriz
    printf("Matriz inseridann");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",matriz[i][j]);
        }
        printf("n");
    }
    
    //imprimindo os elementos da matriz
    printf("Matriz transpostann");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",matriz[j][i]);
        }
        printf("n");
    }
    */

    return 0;
}