#include<stdio.h>

int main(){
    int x;
    printf("Informe um número: \n");
    scanf("%d", &x);
    printf("O número ao triplo, ao quadrado e a sua metade: %d, %d, %.2f\n", 3*x, 2*x, ((float )x)/2);

    return 0;
}