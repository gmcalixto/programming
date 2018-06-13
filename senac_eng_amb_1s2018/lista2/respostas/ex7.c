#include <stdio.h>


int primo(int numero);

int main()
{
   int cont=0,numero=2;
   while(cont<10000){
       if(primo(numero) == 0){
           printf("%d ",numero);
           cont++;
       }
       numero++;
   }
   
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