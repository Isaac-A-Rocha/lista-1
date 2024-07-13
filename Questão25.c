#include<stdio.h>

int main(){
    int horas, minutos, segundos, tempo;
    printf("Informe o tempo em segundos\n");
    scanf("%d", &tempo);
  
    horas = tempo / 3600;
    minutos = (tempo % 3600) / 60;
    segundos = tempo % 60;

    printf("O tempo inserido é equivalente a: %d horas, %d minutos e %d segundos.\n", horas, minutos, segundos);

   
    
    return 0;
}