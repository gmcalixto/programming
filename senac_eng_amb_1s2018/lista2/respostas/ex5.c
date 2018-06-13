#include <stdio.h>

int main()
{
    long int i,n,n_anterior,temp;
    
    
    //dois primeiros números da série
    n=1, n_anterior=1;
    printf("%ld %ld ",n_anterior,n);
    
    //outros 28 da série
    for(i=0;i<28;i++){
        temp = n+n_anterior;
        n_anterior=n;
        n=temp;
        printf("%ld ",temp);
    }
    
    
    return 0;
}