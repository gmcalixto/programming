#include <stdio.h>

int main()
{
    float temp;
    printf("Insira a temperatura em Fahrenheit: ");
    scanf("%f",&temp);
    
    printf("A temperatura em Celsius: %.2f",((temp-32.0f)/1.8f));
    
    
    
    return 0;
}