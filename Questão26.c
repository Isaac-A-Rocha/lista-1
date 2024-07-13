#include <stdio.h>
#include <math.h>

int main() {
    float x1, y1, x2, y2, distancia;

    printf("Digite as coordenadas (x y) do primeiro ponto: ");
    scanf("%f %f", &x1, &y1);

    printf("Digite as coordenadas (x y) do segundo ponto: ");
    scanf("%f %f", &x2, &y2);
    //sqrt: Calcula a raiz de um número.
    //pow: Eleva um número.

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("A distancia entre os dois pontos (%.2f, %.2f) e (%.2f, %.2f) no plano eh: %.2f\n", x1, y1, x2, y2, distancia);

    return 0;
}