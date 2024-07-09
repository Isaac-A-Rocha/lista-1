#include<stdio.h>

int main(){
    float celsius,Fahrenheit;
    printf("Informe a temperatura em Celsius: ");
    scanf("%f",&celsius);
    Fahrenheit = (9/5)*celsius + 32;
    printf("\nA temperatura %.2f Celsius corresponde a %.2f Fahrenheit.\n",celsius,Fahrenheit);
    return 0;
}