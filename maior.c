/*Escreva um algoritmo para ler dois valores (considere que não serão lidos valores
iguais) e escrever o maior deles.*/
#include <stdio.h>

int main(){
    int num1, num2;
    printf("Digite dois valores inteiros:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    /*OPCIONAL
    O enunciado diz que é para considerar que os valores lidos nao sejam iguais, mas caso forem iguais, nao tera diferença nenhuma*/
    while(num1 == num2){
        printf("\nERRO! OS DOIS NUMEROS SAO IGUAIS.\nPOR FAVOR TENTE NOVAMENTE\n");
        printf("Digite dois valores inteiros:\n");
        scanf("%d", &num1);
        scanf("%d", &num2);
    }

    if(num1 > num2){
        printf("\nO %d e maior que %d", num1, num2);
    }
    else{
        printf("\nO %d e maior que %d", num2, num1);
    }

    return 0;
}