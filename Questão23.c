#include <stdio.h>

int main() {
    int numero, digito1, digito2, digito3, numeroInvertido;

    
    printf("Informe um número de três dígitos: ");
    scanf("%d", &numero);

    // Separa o número em seus dígitos componentes
    digito1 = numero / 100;
    printf("%d\n", digito1);
    digito2 = (numero % 100) / 10;
    printf("%d\n", digito2);
    digito3 = numero % 10;
    printf("%d\n", digito3);

    // Reconstrói o número com os componentes na ordem inversa
    numeroInvertido = digito3 * 100 + digito2 * 10 + digito1;
    

    
    printf("O número invertido é: %d\n", numeroInvertido);

    return 0;
}
