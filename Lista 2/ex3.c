#include <stdio.h>

int main()
{
    
    int num1=1,num2=1,numfinal,cont;
    
    printf("1,1,");
    
    for(cont=0;cont<28;cont++){
        numfinal=num1+num2;
        printf("%d,",numfinal);
        num1=num2;
        num2=numfinal;
    }
    
    return 0;
}
