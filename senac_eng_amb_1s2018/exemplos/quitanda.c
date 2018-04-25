/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int opcao;
    float qtd,vMaca=0,vBanana=0,vTomate=0,vMorango=0;
    
    do{
        printf("O que deseja comprar?");
        printf("n1 - Maçã (R$ 1,00/pç)");
        printf("n2 - Banana (R$ 4,00/dz)");
        printf("n3 - Tomate (R$ 5,00/kg)");
        printf("n4 - Morango (R$ 4,00/kg)");
        printf("n0 - Encerrar");
        printf("nOpcao: ");
        scanf("%d",&opcao);
        
        switch(opcao){
         
         case 0: break;
         
         case 1: 
            printf("Informe a quantidade(un): ");
            scanf("%f",&qtd);
            vMaca += qtd;
            break;
         case 2: 
            printf("Informe a quantidade(dz): ");
            scanf("%f",&qtd);
            vBanana += qtd*4;
            break;
         case 3: 
            printf("Informe a quantidade(kg): ");
            scanf("%f",&qtd);
            vTomate += qtd*5;
            break;
         case 4: 
            printf("Informe a quantidade(un): ");
            scanf("%f",&qtd);
            vMorango += qtd*4;
            break;
        
         default:
            printf("Opcao invalida!n");
        }

    }while(opcao != 0);
    
    printf("nTotal de Maça: %.0f, Valor: %.2f",vMaca,vMaca);
    printf("nTotal de Banana: %.2f, Valor: %.2f",vBanana/4.0f,vBanana);
    printf("nTotal de Tomate: %.2f, Valor: %.2f",vTomate/5.0f,vTomate);
    printf("nTotal de Morango: %.0f, Valor: %.2f",vMorango/4.0f,vMorango);
    
    printf("nnTotal da compra = %.2f",vMaca+vMorango+vTomate+vBanana);
    


    return 0;
}
