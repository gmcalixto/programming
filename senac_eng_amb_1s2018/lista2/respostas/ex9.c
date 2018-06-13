#include <stdio.h>

int fat(n){
    if ((n==1) || (n==0)) return 1;               
    else return fat(n-1)*n;
}

int main(){

    int n=7;                        
    printf("O fatorial de %d é %d \n",n,fat (n));

    return 0;
}