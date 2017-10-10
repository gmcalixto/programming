#include <stdio.h>

int main()
{
    float peso,altura,resultado;
    int sexo;
    
    printf("Peso: ");
    scanf("%f",&peso);
    printf("Altura: ");
    scanf("%f",&altura);
    printf("Sexo 1-Feminino 2-Masculino:");
    scanf("%d",&sexo);
    
    resultado = peso/(altura*altura);
    printf("Resultado: %.2f\n",resultado);
    
    switch(sexo){
        case 1:
                if(resultado <=18.4f){
                    printf("Abaixo do peso");
                }
                else if(resultado <=24.0f){
                    printf("Peso normal");
                }
                else if(resultado <=29.0f){
                    printf("Acima do Peso");
                }
                else if(resultado <=34.0f){
                    printf("Obesidade Grau 1");
                }
                else if(resultado <=39.0f){
                    printf("Obesidade Grau 2");
                }
                else{
                    printf("Obesidade Grau 3");
                }
                break;
        case 2:
                if(resultado <=20.0f){
                    printf("Abaixo do peso");
                }
                else if(resultado <=24.9f){
                    printf("Peso normal");
                }
                else if(resultado <=29.9f){
                    printf("Acima do Peso");
                }
                else if(resultado <=39.9f){
                    printf("Obesidade Grau 1");
                }
                else if(resultado <=43.0f){
                    printf("Obesidade Grau 2");
                }
                else{
                    printf("Obesidade Grau 3");
                }
                break; 
        default: printf("Sexo invalido");
    }
    return 0;
}





