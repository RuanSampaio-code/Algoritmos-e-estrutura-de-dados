#include <stdio.h>
//codigo feito com o while
main (){

    //vari�veis
    float dist = 1 ; //recomendado come�ar com um valor
    int i = 1;
    float litros;
    float valorgasolina;
    float gasolconsumir;
    float valorgasto;
    float consumo;

    while (dist !=0){

        printf("Digite as caracteristicas para o carro %d: \n",i);
        printf("Digite a distancia em km: ");
        scanf("%f", &dist);

        //condi��o para parar o while
        if (dist == 0){
            break ; //break para sair do la�o
        }

    	printf("Qual o preco da gasolina: ");
    	scanf("%f", &valorgasolina);
	    printf("Qual o consumo do carro km/l: ");
	    scanf("%f", &consumo);

	    //desenvolvimento
	    litros = dist/consumo;
	    valorgasto = litros*valorgasolina;

	    //impress�o
	    printf("Voce abastecera com %.2f \n",litros );
	    printf("o valor gasto foi %.2f \n",valorgasto);

        i++;
	}
}
