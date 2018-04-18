/******************************************************************************

Avaliação 1 
Exercício 2

*******************************************************************************/

#include <stdio.h>

int main()
{
    float nota;
    
    printf("Insira a nota: ");
    scanf("%f",&nota);
    
    if(nota >=7.0f){
        printf("O aluno com nota %2.2f esta APROVADO",nota);
    }
    else{
        printf("O aluno com nota %2.2f esta REPROVADO",nota);
    }
    
    return 0;
}