#include<stdio.h>

int main(){
    int a,b,c;
    printf("Informe o valor dois valores no formato A,B: \n");
    scanf("%d,%d",&a, &b);
    c=a;
    a=b;
    printf("Valor de A: %d\n", c);
    printf("Valor de b: %d\n", a);



    return 0;
}