/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,maior,menor,parada=1;
    
    printf("Digite um numero: ");
    scanf("%d",&x);
    
    maior=x;
    menor=x;
    
    printf("Responda 1 para continuar ou outro numero para sair: ");
    scanf("%d",&parada);
    
    if(parada == 1){
        while(parada == 1){
            printf("Digite um numero: ");
            scanf("%d",&x);
            
            if(x>maior){
                maior=x;
            }
            else if(x<menor){
                menor=x;
            }
            
            printf("Responda 1 para continuar ou outro numero para sair: ");
            scanf("%d",&parada);
        }
        
        printf("nMenor encontrado = %d",menor);
        printf("nMaior encontrado = %d",maior);
    }
    else{
        printf("Sem maior ou menor encontrado (somente um numero digitado)");
    }
    
    return 0;
}
