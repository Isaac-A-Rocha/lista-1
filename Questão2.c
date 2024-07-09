#include<stdio.h>

int main(){
    int X;

    // Lendo o valor inteiro decimal X
    printf("Digite um valor inteiro decimal: ");
    scanf("%d", &X);

    // Escrevendo o valor em hexadecimal
    printf("Valor em hexadecimal: %X\n", X);

    // Escrevendo o valor em octal
    printf("Valor em octal: %o\n", X);

    return 0;
}