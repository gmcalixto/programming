#include <stdio.h>

int main()
{
    int maior;
    int menor;
    int x;
    
    printf("Escreva o primeiro numero: ");
    scanf("%d",&x);
    
    maior = x;
    menor = x;
    
    
    printf("Escreva o segundo numero: ");
    scanf("%d",&x);
        
    if(x > maior){
        maior = x;
    }
    else if(x < menor){
        menor = x;
    }
    
    printf("Escreva o terceiro numero: ");
    scanf("%d",&x);
        
    if(x > maior){
        maior = x;
    }
    else if(x < menor){
        menor = x;
    }
    
    printf("Escreva o quarto numero: ");
    scanf("%d",&x);
        
    if(x > maior){
        maior = x;
    }
    else if(x < menor){
        menor = x;
    }
    
    printf("Escreva o quinto numero: ");
    scanf("%d",&x);
        
    if(x > maior){
        maior = x;
    }
    else if(x < menor){
        menor = x;
    }
    
    printf("Escreva o sexto numero: ");
    scanf("%d",&x);
        
    if(x > maior){
        maior = x;
    }
    else if(x < menor){
        menor = x;
    }
    
    printf("Escreva o setimo numero: ");
    scanf("%d",&x);
        
    if(x > maior){
        maior = x;
    }
    else if(x < menor){
        menor = x;
    }
    
    printf("Escreva o oitavo numero: ");
    scanf("%d",&x);
        
    if(x > maior){
        maior = x;
    }
    else if(x < menor){
        menor = x;
    }
    
    printf("Escreva o nono numero: ");
    scanf("%d",&x);
        
    if(x > maior){
        maior = x;
    }
    else if(x < menor){
        menor = x;
    }
    
    printf("Escreva o decimo numero: ");
    scanf("%d",&x);
        
    if(x > maior){
        maior = x;
    }
    else if(x < menor){
        menor = x;
    }  

    
    printf("Maior: %d\n",maior);
    printf("Menor: %d\n",menor);
    
	system("pause");
    return 0;
}

