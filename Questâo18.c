#include<stdio.h>

int main(){
    float pi, raio, circunferencia, diametro;
    pi = 3.14159;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    
    //calculando a circunferência
    circunferencia = (2 * pi) * raio;
    //calculando o diâmetro
    diametro = 2 * raio;
    printf("O valor de pi:  %.5f\n",pi);
    printf("O valor do raio: %.2f\n" ,raio);
    printf("A circunferência é igual a :%.2f\n",circunferencia);
    printf("E o diâmetro é igual a :% .2f \n",diametro);
    return 0;
}