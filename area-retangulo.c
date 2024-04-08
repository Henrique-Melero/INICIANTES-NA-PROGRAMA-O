/*Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e
escrever a área do retângulo.*/
#include <stdio.h>

int main(){
    int b, h, area; //b de base e h de altura
    printf("Para calcularmos a area de um triangulho precisamos da base e da altura.");
    printf("\nDigite o tamanho da base: ");
    scanf("%d", &b);
    printf("Digite o tamanho da altura: ");
    scanf("%d", &h);
    area = b * h;

    printf("\nAREA DO RETANGULO = %d", area);

    return 0;
}