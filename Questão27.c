#include <stdio.h>
#include <math.h>

int main() {
    float num1, num2, num3, media_aritmetica, media_geometrica;

    printf("Digite o primeiro numero em ponto flutuante: ");
    scanf("%f", &num1);

    printf("Digite o segundo numero em ponto flutuante: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero em ponto flutuante: ");
    scanf("%f", &num3);

    // Calculando média aritmética
    media_aritmetica = (num1 + num2 + num3) / 3;

    // Calculando média geométrica
    media_geometrica = pow(num1 * num2 * num3, 1.0/3.0);// 1/3 equivale a raiz cúbica.

    printf("A media aritmetica dos numeros digitados eh: %.2f\n", media_aritmetica);
    printf("A media geometrica dos numeros digitados eh: %.2f\n", media_geometrica);

    return 0;
}