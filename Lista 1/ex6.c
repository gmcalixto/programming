#include <stdio.h>

int main()
{
    int ano_atual=2017,ano,tempo_contrib,sexo;
    
    printf("Ano Nascimento: ");
    scanf("%d",&ano);
    
    printf("Tempo Contribuicao: ");
    scanf("%d",&tempo_contrib);
    
    printf("Sexo 1-Mulher 2-Homem: ");
    scanf("%d",&sexo);
    
    switch(sexo){
        case 1: 
                if(tempo_contrib>=30){
                    printf("Aposenta por tempo de contribuicao");
                }
                else if(tempo_contrib>=15 && ((ano_atual-ano)>=60)){
                    printf("Aposenta por idade");
                }
                else{
                    printf("Não aposenta");
                }
                break;
        case 2:
                if(tempo_contrib>=35){
                    printf("Aposenta por tempo de contribuicao");
                }
                else if(tempo_contrib>=15 && ((ano_atual-ano)>=65)){
                    printf("Aposenta por idade");
                }
                else{
                    printf("Não aposenta");
                }
                break;
        default: printf("Sexo invalido");
    }
    
    
    return 0;

    
}