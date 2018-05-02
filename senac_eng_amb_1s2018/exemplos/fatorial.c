/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    long double i,fat;
    
    printf("Digite o numero: ");
    scanf("%Lf",&fat);
    
    if(fat==0){
        printf("Fatorial: 1");
    }
    else if(fat<0){
        printf("Numero invalido");
    }
    else{
        for(i=fat-1;i>1;i--){
            fat*=i; 
        }
        printf("Fatorial: %Le",fat);
    }

    return 0;
}