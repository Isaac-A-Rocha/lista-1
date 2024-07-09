#include<stdio.h>

int main(){
    float volume, largura, comprimento, altura;
    printf("Digite o valor da largura, do comprimento e da altura\nSiga o formato largura,comprimento,altura: \n");
    scanf("%f,%f,%f", &largura, &comprimento, &altura);
    
    
    volume = largura * comprimento * altura;  
    printf("\nO Volume é: %.2f\n",volume); 
    return 0;
}