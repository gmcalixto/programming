#include <stdio.h>

int main()
{
    int ano;
    printf("Ano Desejado: ");
    scanf("%d",&ano);
    
    if(ano%4==0){
        printf("Bissexto");
    }
    else{
        printf("Nao bissexto");
    }

    
    return 0;
}