#include <stdio.h>
main (){
	//declara��o de variveis
	float notas,media;
    //variavel para somar as notas
	float soma = 0;
	int i;

    printf("====== Calculando media do aluno ========= \n");

	/*la�o de repeti��o para pega as 3 notas
	entrada de dados*/
	for (i = 1; i<=3; i++){
        printf("Digite a %d � nota: ",i);
        scanf("%f", &notas);
        soma = soma + notas;
	}

	media = (soma)/3;

	printf("A m�dia e %f \n", media);

	if (media>=7){
		printf("Parabens est� Apovado");
	}
	else {
		printf("Voce Reprovou !");
	}

}
