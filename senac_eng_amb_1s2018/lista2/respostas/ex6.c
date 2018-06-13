#include <stdio.h>


int primo(int numero);

int main()
{
    int numero_teste=47;
    printf("Numero %d = %d",numero_teste,primo(numero_teste));
    return 0;
}

int primo(int numero){
    int i;
    
    if(numero<1) return -1;
    
    for(i=2;i<numero-1;i++){
        if(numero%i == 0){
            return 1;       
        }
    }
    return 0;
}