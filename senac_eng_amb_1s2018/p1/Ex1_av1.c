/******************************************************************************

Avaliação 1
Exercício 1

*******************************************************************************/

#include <stdio.h>

int main()
{
    int x,menor_impar,maior_par;
    int tem_menor_impar=0,tem_maior_par=0;
    
    printf("Insira o primeiro numero: ");
    scanf("%d",&x);
    
    if(x%2 == 0){
        maior_par = x;
        tem_maior_par=1;
    }
    else{
        menor_impar = x;
        tem_menor_impar=1;
    }
    
    
    printf("Insira o segundo numero: ");
    scanf("%d",&x);
    
    if(x%2 == 0){
        if(tem_maior_par == 0){
            maior_par = x;
            tem_maior_par=1;
        }
        else if(x > maior_par){
            maior_par = x;
        }
    }
    else{
        if(tem_menor_impar == 0){
            menor_impar = x;
            tem_menor_impar=1;
        }
        else if(x < menor_impar){
            menor_impar = x;
        }
    }
    
    printf("Insira o terceiro numero: ");
    scanf("%d",&x);
    
    if(x%2 == 0){
        if(tem_maior_par == 0){
            maior_par = x;
            tem_maior_par=1;
        }
        else if(x > maior_par){
            maior_par = x;
        }
    }
    else{
        if(tem_menor_impar == 0){
            menor_impar = x;
            tem_menor_impar=1;
        }
        else if(x < menor_impar){
            menor_impar = x;
        }
    }
    
    printf("Insira o quarto numero: ");
    scanf("%d",&x);
    
    if(x%2 == 0){
        if(tem_maior_par == 0){
            maior_par = x;
            tem_maior_par=1;
        }
        else if(x > maior_par){
            maior_par = x;
        }
    }
    else{
        if(tem_menor_impar == 0){
            menor_impar = x;
            tem_menor_impar=1;
        }
        else if(x < menor_impar){
            menor_impar = x;
        }
    }
    
    printf("Insira o quinto numero: ");
    scanf("%d",&x);
    
    if(x%2 == 0){
        if(tem_maior_par == 0){
            maior_par = x;
            tem_maior_par=1;
        }
        else if(x > maior_par){
            maior_par = x;
        }
    }
    else{
        if(tem_menor_impar == 0){
            menor_impar = x;
            tem_menor_impar=1;
        }
        else if(x < menor_impar){
            menor_impar = x;
        }
    }
    
    printf("Insira o sexto numero: ");
    scanf("%d",&x);
    
    if(x%2 == 0){
        if(tem_maior_par == 0){
            maior_par = x;
            tem_maior_par=1;
        }
        else if(x > maior_par){
            maior_par = x;
        }
    }
    else{
        if(tem_menor_impar == 0){
            menor_impar = x;
            tem_menor_impar=1;
        }
        else if(x < menor_impar){
            menor_impar = x;
        }
    }
    
    printf("Insira o sétimo numero: ");
    scanf("%d",&x);
    
    if(x%2 == 0){
        if(tem_maior_par == 0){
            maior_par = x;
            tem_maior_par=1;
        }
        else if(x > maior_par){
            maior_par = x;
        }
    }
    else{
        if(tem_menor_impar == 0){
            menor_impar = x;
            tem_menor_impar=1;
        }
        else if(x < menor_impar){
            menor_impar = x;
        }
    }
    
    printf("Insira o oitavo numero: ");
    scanf("%d",&x);
    
    if(x%2 == 0){
        if(tem_maior_par == 0){
            maior_par = x;
            tem_maior_par=1;
        }
        else if(x > maior_par){
            maior_par = x;
        }
    }
    else{
        if(tem_menor_impar == 0){
            menor_impar = x;
            tem_menor_impar=1;
        }
        else if(x < menor_impar){
            menor_impar = x;
        }
    }
    
    printf("Insira o nono numero: ");
    scanf("%d",&x);
    
    if(x%2 == 0){
        if(tem_maior_par == 0){
            maior_par = x;
            tem_maior_par=1;
        }
        else if(x > maior_par){
            maior_par = x;
        }
    }
    else{
        if(tem_menor_impar == 0){
            menor_impar = x;
            tem_menor_impar=1;
        }
        else if(x < menor_impar){
            menor_impar = x;
        }
    }
    
    printf("Insira o décimo numero: ");
    scanf("%d",&x);
    
    if(x%2 == 0){
        if(tem_maior_par == 0){
            maior_par = x;
            tem_maior_par=1;
        }
        else if(x > maior_par){
            maior_par = x;
        }
    }
    else{
        if(tem_menor_impar == 0){
            menor_impar = x;
            tem_menor_impar=1;
        }
        else if(x < menor_impar){
            menor_impar = x;
        }
    }
    
    if(tem_maior_par == 1){
        printf("O maior par = %d",maior_par);
    }
    else{
        printf("Sem maior par");
    }
    
    if(tem_menor_impar == 1){
        printf("\nO menor impar = %d",menor_impar);
    }
    else{
        printf("\nSem menor impar");
    }


    return 0;
}