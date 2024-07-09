#include<stdio.h>

int main(){
    int x;
    printf("\nx = 7+3*6/2-1");
    x = 7 + 3 * 6 / 2 - 1;
    printf("\nx=%d",x);
    printf("\nO programa resolve primeiro a multiplicação(3*6)\n, em seguida divisão(18/2), depois soma e subtrai(7+9-1). ");
    printf("\nx = 2mod2+2*2-2/2");
    x = 2%2 + 2 * 2 - 2 / 2;
    printf("\nx=%d",x);
    printf("\nO segundo exemplo primeiro se resolve o módulo de 2, depois a multiplicação e divisão(2*2) e (2/2), por fim as somas e subtrações.");
    printf("\nx = (3 * 9 * (3 + (9*3/ (3))))");
    x = (3 * 9 * (3 + (9 * 3 / (3))));
    printf("(3 * 9 * (3 + (9 * 3 / (3))))");
    printf("O terceiro programa segue a regra dos parênteses, (3/3*9) depois soma com 3 e em seguida (12*9*3)");
    printf("\nx=%d\n",x);

    return 0;
}