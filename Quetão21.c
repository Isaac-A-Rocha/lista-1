#include <stdio.h>

int main() {
    int num1, num2, multiplo;
    
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    multiplo = !(num1 % num2);
    
    printf("O primeiro número %s múltiplo do segundo número.\n", multiplo ? "é" : "não é");
    
    return 0;
}
#include <stdio.h>

int main() {
    char letras[] = "A BCabc 0 12 $ * + / ";

    printf("Inteiros equivalentes:\n");
    for (int i = 0; i < 14; i++) {
        printf("%c: %d\n", letras[i], letras[i]);
    }

    return 0;
}