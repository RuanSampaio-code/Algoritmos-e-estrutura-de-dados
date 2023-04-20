
#include <stdio.h>
#include <stdlib.h>

int main(){
	
	//criação de variáveis
	float altura;
	float pesoideal;
	
	//entrada de dados
	printf("Qual a sua altura? ");
	scanf("%f", &altura);
	
	//procesamento de dados
	pesoideal = (72.7*altura)-58;
	
	//saída de dados
	printf("Seu peso ideal: %.2f Kg ",pesoideal);
	
	 
}