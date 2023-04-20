#include <stdio.h>
int main (){
	
    //variáveis
    int dist;
    int i = 1;
    float litros;
    float valorgasolina;
    float gasolconsumir;
    float valorgasto;
    float consumo;

    //entrada de dados
    while (dist !=0){
       
        printf("Digite as caracteristicas para o carro: %d \n",i);
        printf("Digite a distancia em km: ");
        scanf("%f", &dist);

        //condição para parar o while
       

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
     
		}
	}
	

