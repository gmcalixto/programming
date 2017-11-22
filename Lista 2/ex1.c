#include <stdio.h>

int main()
{
    int numero,opcao=0,npar=0,nimpar=0,cont=0;
    
    do{
        printf("Insira um numero: ");
        scanf("%d",&numero);
        
        
        
        if(numero>0){
            cont++;
            if(numero%2 == 0){
                npar++;
            }
            else{
                nimpar++;
            }
        }
        else{
            printf("Numero invalido\n");
        }
        printf("Continuar 1-Sim 0-Nao: ");
        scanf("%d",&opcao);
        
    }while(opcao!=0);

    printf("Numero testados: %d\n",cont);
    printf("Numeros pares: %d\n",npar);
    printf("Numero impares: %d\n",nimpar);
    

    return 0;
}

