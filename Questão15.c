#include<stdio.h>

int main(){
    int gratificação, horas;
    float salario, salariofinal, imposto;
    printf("Informe a quantidade de horas cumpridas: ");
    scanf("%d", &horas);
    if (horas < 11){
        salario = horas * 50.25;
        imposto = salario * 10/100;
        salariofinal = salario - imposto;
        printf("O valor a receber é : %.2f\n", salariofinal);
    } 
    else if (horas > 9 && horas < 21){
        gratificação = (horas * 50.25) * 20 / 100;
        salario = gratificação + horas * 50.25;
        imposto = salario * 10/100;
        salariofinal = salario - imposto;
        printf("O valor a receber é : %.2f\n", salariofinal);
    }
    else{
        gratificação = (horas * 50.25) * 30 / 100;
        salario = gratificação + horas * 50.25;
        imposto = salario * 10/100;
        salariofinal = salario - imposto;
        printf("O valor a receber é : %.2f\n", salariofinal);
        
    }
    
    

    return 0;
}