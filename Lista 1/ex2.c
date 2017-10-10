#include <stdio.h>

int main()
{
    float cand1;
    float cand2;
    float cand3;
    float brancos;
    float nulos;
    float total;
    
    float pcand1;
    float pcand2;
    float pcand3;
    float pbrancos;
    float pnulos;
    
    printf("Votos do candidato 1: ");
    scanf("%f",&cand1);
    printf("Votos do candidato 2: ");
    scanf("%f",&cand2);
    printf("Votos do candidato 3: ");
    scanf("%f",&cand3);
    printf("Votos brancos: ");
    scanf("%f",&brancos);
    printf("Votos nulos: ");
    scanf("%f",&nulos);
    
    total = cand1+cand2+cand3+brancos+nulos;
    pcand1 = cand1/total;
    pcand2 = cand2/total;
    pcand3 = cand3/total;
    pbrancos =  brancos/total;
    pnulos = nulos/total;
    printf("Total de votos: %f\n",total);
    printf("Porcentagem de votos candidato 1: %f\n",pcand1*100);
    printf("Porcentagem de votos candidato 2: %f\n",pcand2*100);
    printf("Porcentagem de votos candidato 3: %f\n",pcand3*100);
    printf("Porcentagem de votos brancos: %f\n",pbrancos*100);
    printf("Porcentagem de votos nulos: %f\n",pnulos*100);

	system("pause");

    return 0;
}