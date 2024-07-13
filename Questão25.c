#include<stdio.h>

int main(){
    int horas, minutos, segundos, tempo;
    printf("Informe o tempo em segundos\n");
    scanf("%d", &tempo);
  
    horas = (tempo / 3600);
    minutos = (tempo / 60);
    segundos = (tempo % 60);
    printf("O tempo em horas é %d\n", horas);
    printf("O tempo em minutos é %d\n", minutos);
    printf("O tempo em segundos é %d\n", segundos);
   
    
    return 0;
}