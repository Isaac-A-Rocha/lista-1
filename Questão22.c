#include <stdio.h>

int main() {
    char letras_maiusculas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char letras_minusculas[] = "abcdefghijklmnopqrstuvwxyz";
    char simbolos_especiais[] = "!@#$%^&*()_+";
    int i;

    printf("Letras maiúsculas:\n");
    for (i = 0; i < sizeof(letras_maiusculas)-1; i++) {
        printf("%c => %d\n", letras_maiusculas[i], letras_maiusculas[i]);
    }

    printf("\nLetras minúsculas:\n");
    for (i = 0; i < sizeof(letras_minusculas)-1; i++) {
        printf("%c => %d\n", letras_minusculas[i], letras_minusculas[i]);
    }

    printf("\nSímbolos especiais:\n");
    for (i = 0; i < sizeof(simbolos_especiais)-1; i++) {
        printf("%c => %d\n", simbolos_especiais[i], simbolos_especiais[i]);
    }

    return 0;
}

