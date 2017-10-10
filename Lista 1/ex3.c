#include <stdio.h>

int main()
{
    
    float nota;

    printf("Insira a nota:");
    scanf("%f",&nota);
    
    if(nota>=6.0f){
        printf("Aprovado\n");
    }
    else{
        printf("Reprovado\n");
    }
    
    system("pause");

    return 0;
}
