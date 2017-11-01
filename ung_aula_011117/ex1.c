#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cont;
	
	cont=0;
	
	while(cont<10){
		printf("Contador = %d\n",cont);
		cont++;
	}
	
	
	return 0;
}