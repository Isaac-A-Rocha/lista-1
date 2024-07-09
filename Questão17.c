#include <stdio.h>

int main() {
    int num, abs;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    abs = (num + (num < 0 ? -num : num)) / 2; // '?' utilizado  para condicionar a execução de uma parte do código se o teste for verdade.
    
    printf("O valor absoluto é: %d\n", abs);
    
    return 0;
}

