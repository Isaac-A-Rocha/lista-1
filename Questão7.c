#include<stdio.h>

int main(){
    int horas, minutos, segundos, segundostotais;
    printf("Informe o horario no formato hh:mm:ss\n");
    scanf("%d:%d:%d", &horas, &minutos, &segundos);
  
    segundostotais = (horas * 3600) + (minutos * 60) + segundos; 
   
    printf("%d", segundostotais);
    return 0;
}