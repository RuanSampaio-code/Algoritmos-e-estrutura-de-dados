#include <stdio.h>
#include <stdlib.h>
//funções


void ehpar(num){

    if (num%2 == 0 ){
        printf("Este numero eh par.");
    }else{
        printf("Numero impar.");
    }
}


main (){

    int number;
    printf("===========Descubra se o numero eh par ou impar================ \n");
    printf("Digite um numero: ");
    scanf("%d", &number);

    ehpar(number);

	return;
}
