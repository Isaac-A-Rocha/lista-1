#include <stdio.h>

int main() {
    int x, u;

    printf("Informe o valor de x: ");
    scanf("%d", &x);
    printf("Informe o valor de u: ");
    scanf("%d", &u);
    int produto = x << u;
    
    printf("O produto entre %d e 2 elevado a %d é: %d\n", x, u, produto);
    
    return 0;
}