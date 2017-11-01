#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	int res;
	
	printf("Digite o numero: ");
	scanf("%d",&x);
	
	res = x;
	
	while(x>2){
		x=x-1;
		res=res*x;
	}
	
	printf("Fatorial = %d",res);
	return 0;
}