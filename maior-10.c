/*Escreva um algoritmo para ler um valor e escrever a mensagem “É MAIOR QUE 10!” se
o valor lido for maior que 10, ou escrever “NÃO É MAIOR QUE 10!” caso contrário. */
#include <stdio.h>

int main(){
    int num;
    printf("Digite um valor inteiro: ");
    scanf("%d", &num);

    if(num > 10){
        printf("\nE MAIOR QUE 10!");
    }
    else{
        printf("\nNAO E MAIOR QUE 10!");
    }

    return 0;
}