#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x,maior,menor;
	
	printf("Digite um numero: ");
	scanf("%d",&x);
	
	//para o primeiro número, deve ser guardado em maior e menor para
	//referência de comparação
	maior=x;
	menor=x;
	
	//solicito quantos outros números forem desejados
	while(1){
	
		printf("Digite um numero: ");
		scanf("%d",&x);
		
		if(x==0){
			break;
		}
		
		//analisa o maior número
		if(x>maior){
			maior=x;
		}
		if(x<menor){
			menor=x;
		}
	}
	
	printf("Maior numero = %d\n",maior);
	printf("Menor numero = %d\n",menor);
	
	return 0;
}