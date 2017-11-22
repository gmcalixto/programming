#include <stdio.h>

int main()
{
    
    int x,numero=2,contprimo=0;
    
    while(contprimo<10000){
        for(x=2;x<numero;x++){
            if(numero%x==0){
                break;
            }
        }
        
        if(x==numero){
            printf("%d,",numero);
            contprimo++;
        }
        numero++;
    }
    return 0;
}
