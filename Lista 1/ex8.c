#include <stdio.h>

int main()
{
    int ano,ano_atual=2017;
    printf("Ano de Nascimento: ");
    scanf("%d",&ano);
    
    if((ano_atual-ano) >= 16){
        printf("Pode votar");
    }
    else{
        printf("Nao pode votar");
    }
    
    return 0;
}
