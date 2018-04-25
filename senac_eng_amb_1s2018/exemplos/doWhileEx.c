/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x=0;
    
    do{
        
        printf("nTeste do do-while");
        printf("nContinuar? 0 para parar: ");
        scanf("%d",&x);
        
        
    }while(x != 0);
    

    return 0;
}