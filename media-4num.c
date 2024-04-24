/*Faça um programa que receba 4 números inteiros positivos, calcule a média desses
números e imprima o resultado na tela.
Exemplo: Entradas: 2, 5, 15, 13 - Processamento: (2 + 5 + 15 + 13)/4 - Saída: 8*/

#include <stdio.h>

int main(){
    int a, b, c, d, media;

    printf("Digite 4 numeros inteiros para realizar a media:\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    media = (a + b + c + d) / 4;

    printf("\nMEDIA = %d", media); //.2 para pegar apenas dois numeros após a casa decimal

    return 0;
}