#include<stdio.h>

int main(){
    int num;
    printf("Informe um númeor inteiro.\n");
    scanf("%d", &num);

    printf("O número %d é %s\n", num, (num % 2 == 0) ? "par" : "ímpar");


    return 0;
    }