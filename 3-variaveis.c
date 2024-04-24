/*Faça um programa que tenha 3 variáveis, uma do tipo float, outra do tipo char e, por
último, uma do tipo int. Dê valores a essas variáveis, utilizando scanf, e imprima-as na
tela.*/

#include <stdio.h>

int main(){
    float num_flutuante;
    char caracter;
    int num_inteiro;

    printf("Digite um valor para essas tres variaveis seguintes:");
    printf("\nVarivel Flutuante(numero racional) = ");
    scanf("%f", &num_flutuante);
    printf("Varivel Caracter(letra) = ");
    scanf(" %c", &caracter); //Para não dar erro, é necessário um espaço da primeira aspas para o %c
    printf("Varivel Inteira(numero inteiro) = ");
    scanf("%d", &num_inteiro);

    printf("\nAs valor das variavei sao as seguintes -> %.4f; %c; %d", num_flutuante, caracter, num_inteiro);
    //No caso, %.2f é utilizado para imprimir 4 numero após a virgula
    return 0;
}