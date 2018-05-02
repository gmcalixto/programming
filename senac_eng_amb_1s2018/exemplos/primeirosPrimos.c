/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, Perl, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i=0,primo=3,contprimo=1,ePrimo;
    
    printf("2 ");
    
    for(contprimo=1;contprimo<=9999;contprimo++){
        ePrimo=0;
        
        while(!ePrimo){
            for(i=2;i<primo-1;i++){
                if(primo%i==0){
                    ePrimo=0;
                    break;
                }
            }
            if(i == primo-1){
                ePrimo=1;
                printf("%d ",primo);
            }
            primo++;
        }
    }

    return 0;
}
