#include<stdio.h>

int main(){
    int hora;
    float valorhora, inss,salariobruto, salarioliquido;
    printf("Digite a quantidade de horas trabalhadas e o valor da hora use a vírgula para separa: ");
    scanf("%d, %f", &hora, &valorhora);
    printf("\nInforme o percentual do INSS\n");
    scanf("%f",&inss);

    salariobruto = hora * valorhora;
    salarioliquido = salariobruto - (salariobruto * inss)/100;
    printf("\nO salário bruto: %.2f", salariobruto);
    printf("\nO salário liquido: %.2f",salarioliquido);

    return 0;
}