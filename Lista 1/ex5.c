#include <stdio.h>

int main()
{

    float gasolina;
    float alcool;
    float fator;

    printf("Insira o valor da gasolina:");
    scanf("%f",&gasolina);
    
    printf("Insira o valor da alcool:");
    scanf("%f",&alcool);
    
    fator = alcool / gasolina;
    
    if(fator >= 0.7f){
    	printf("Compensa a gasolina\n");
    }
    else{
		printf("Compensa o alcool\n");
    }
    
    system("pause");
    
    return 0;
}
