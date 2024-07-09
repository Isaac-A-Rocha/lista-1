#include<stdio.h>

int main(){
    int num1, num2;
    printf("Informe dois números no  formato: número 1 , número 2 \n");
    scanf("%d, %d", &num1, &num2);
    printf("Soma: %d\n", num1 + num2);
    printf("Produto: %d\n", num1 * num2);
    printf("Diferença: %d\n", num1 - num2);
    printf("Quociente: %d\n", num1 / num2);
    printf("Resto: %d\n", num1 % num2);
    return 0;
}