#include<stdio.h>

int main(){
    float dolar, real, valorfinal;
    printf("Digite o valor em reais que você deseja converter: \n");
    scanf("%f", &real);
    printf("Informe o valor do dolar atualmente\n");
    scanf("%f",&dolar);
    
    valorfinal = (real / dolar);
    printf("O valor de %.2f em dólar é: %.2f\n",  real, valorfinal);
    return 0;
}