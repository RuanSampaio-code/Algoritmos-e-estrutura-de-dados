#include <stdio.h>
main (){

    //variáveis
    float dist;
    float litros;
    float valorgasolina;
    float gasolconsumir;
    float valorgasto;

    //entrada de dados
    printf("Digite a distancia em km: ");
    scanf("%f", &dist);
    printf("Qual o preco da gasolina: ");
    scanf("%f", &valorgasolina);

    //desenvolvimento
    litros = dist/12;
    valorgasto = litros*valorgasolina;

    //impressão
    printf("Voce abastecera com %f",litros );
    printf("o valor gasto foi %f",valorgasto);





}
