#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor[10];
	int x;
	
	for(x=0;x<10;x++){
		printf("Numero na posicao %d:",x);
		scanf("%d",&vetor[x]);
	}
	
	for(x=0;x<10;x++){
		printf("%d %d\n",vetor[x],vetor[9-x]);
	}
	
	return 0;
}