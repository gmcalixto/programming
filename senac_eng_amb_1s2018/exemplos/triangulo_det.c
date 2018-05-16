#include <stdio.h>

int main()
{
    double matriz[3][3];
    int i,j;
    double d_principal,d_secundaria,d,s;
    
    //preenchendo a matriz com os pontos do triangulo
    for(i=0;i<3;i++){
        printf("Insira o valor de X%c: ",97+i);
        scanf("%lf",&matriz[i][0]);
        
        printf("Insira o valor de Y%c: ",97+i);
        scanf("%lf",&matriz[i][1]);
        
        matriz[i][2] = 1.0;
    }
    
    //imprimindo os elementos da matriz
    printf("Matriz inseridann");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%.2lf ",matriz[i][j]);
        }
        printf("n");
    }
    
    d_principal = (matriz[0][0]*matriz[1][1]*matriz[2][2])+(matriz[0][1]*matriz[1][2]*matriz[2][0]) + (matriz[1][0]*matriz[2][1]*matriz[0][2]);
    d_secundaria = -(matriz[0][2]*matriz[1][1]*matriz[2][0])-(matriz[0][0]*matriz[1][2]*matriz[2][1]) - (matriz[0][1]*matriz[1][0]*matriz[2][2]);

    d=d_principal+d_secundaria;
    
    s=0.5*fabs(d);
    
    printf("Area = %.2lf",s);

    return 0;
}