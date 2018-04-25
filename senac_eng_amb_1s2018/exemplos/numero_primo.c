/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,x=2,primo=1;
    
    printf("Insira o numero que deseja consultar: ");
    scanf("%d",&num);
    
    while(x<num-1){
        if(num%x == 0){
            primo=0;
            break;
        }
        x++;
    }
    
    if(primo){
        printf("O numero %d e primo",num);
    }
    else{
        printf("O numero %d nao e primo",num);
    }
    

    return 0;
}