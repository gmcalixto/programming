#include <stdio.h>

int main()
{
    
    int x,numero;
    
    printf("Numero: ");
    scanf("%d",&numero);
    
    for(x=2;x<numero;x++){
        if(numero%x==0){
            break;
        }
    }
    
    if(x==numero){
        printf("Primo!");
    }
    else{
        printf("Nao e primo!");
    }
    
    return 0;
}
