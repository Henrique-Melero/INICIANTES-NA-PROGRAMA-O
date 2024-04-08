/*Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu
antecessor.*/
#include <stdio.h>

int main(){
    int num, ant; //ant de antecessor
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    ant = num - 1;

    printf("\nO numero antecessor de %d e: %d", num, ant);

    return 0;
}