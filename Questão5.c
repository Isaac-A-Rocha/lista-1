#include <stdio.h>

int main(){
    float conta, percentual;
    printf("Informe utilizando ponto, por exemplo 255.25\n");
    printf("Informe o valor da conta: ");
    scanf("%f", &conta);
    percentual = (conta * 10/100);
    printf("Valor referente a 10%% da conta: %.2f\n",percentual);
    printf("O valor final da conta é: %.2f\n", percentual + conta);
    return 0;

}

    