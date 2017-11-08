#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x=0;
	int cont;
	
	do{
		
		printf("Valor de X = %d\n",x++);
		printf("Continuar? 1-Sim 2-Não: ");
		scanf("%d",&cont);
		
	}while(cont==1);
	
	
	return 0;
}