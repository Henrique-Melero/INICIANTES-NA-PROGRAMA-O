/*Escreva um algoritmo para ler um valor e escrever a mensagem “É PAR!” se o valor lido
for par, ou escrever “É ÍMPAR!” caso contrário.*/
#include <stdio.h>

int main(){
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\nE PAR!");
    }
    else{
        printf("\nE IMPAR!");
    }

    return 0;
}