#include<stdio.h>

int main(){
    int x;
    printf("Informe um número\n");
    scanf("%d", &x);
    printf("O antecessor %d, o número informado %d, e o sucessor %d\n", x-1, x, x+1);
    return 0;
}