#include <stdio.h>
//codigo feito com o do while
main (){

    //variáveis
    int dist ;
    int i = 1;
    float litros;
    float valorgasolina;
    float gasolconsumir;
    float valorgasto;
    float consumo;


    do {
        printf("Digite as caracteristicas para o carro %d: \n",i);
        printf("Digite a distancia em km: ");
        scanf("%f", &dist);

        //condição para parar o while
        if (dist == 0){
            break ; //break para sair do laço
        }

    	printf("Qual o preco da gasolina: ");
    	scanf("%f", &valorgasolina);
	    printf("Qual o consumo do carro km/l: ");
	    scanf("%f", &consumo);

	    //desenvolvimento
	    litros = dist/consumo;
	    valorgasto = litros*valorgasolina;

	    //impressão
	    printf("Voce abastecera com %f \n",litros );
	    printf("o valor gasto foi %f \n",valorgasto);

        i++;

    }while(dist !=0);




}
