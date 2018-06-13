#include <stdio.h>


int main()
{
    int matriz2[2][2],matriz3[3][3],i,j,det,opcao;
    
    printf("Escolha o tipo de matriz: 1 - 2x2, 2 - 3x3: ");
    scanf("%d",&opcao);
    
    switch(opcao){
        case 1:
            //matriz2x2
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    matriz2[i][j]=rand()%100;
                    printf("%d ",matriz2[i][j]);
                }
                printf("\n");
            }
            //determinante
            det = (matriz2[0][0]*matriz2[1][1])-(matriz2[0][1]*matriz2[1][0]);
            printf("\nDet = %d",det);
            break;
        case 2:
            //matriz3x3
            for(i=0;i<3;i++){
                for(j=0;j<3;j++){
                    matriz3[i][j]=rand()%100;
                    printf("%d ",matriz3[i][j]);
                }
                printf("\n");
            }
            //determinante
            det=((matriz3[0][0]*matriz3[1][1]*matriz3[2][2])+(matriz3[0][1]*matriz3[1][2]*matriz3[2][0])+(matriz3[0][2]*matriz3[1][0]*matriz3[2][1]))-((matriz3[2][0]*matriz3[1][1]*matriz3[0][2])+(matriz3[2][1]*matriz3[1][2]*matriz3[0][0])+(matriz3[2][2]*matriz3[1][0]*matriz3[0][1]));
            printf("\nDet = %d",det);
            break;
        default:
            printf("\nInvalido");
    }
    
    return 0;
    
}

