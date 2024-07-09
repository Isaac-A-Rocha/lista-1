#include<stdio.h>

int main(){
    float altura, masculino, feminino;
    char sexo;
    printf("Digite o sexo do paciente: \n");
    scanf("%c", &sexo);
    printf("Digite a altura do paciente: \n");
    scanf("%f", &altura);
    
    if(sexo == 'm' || sexo == 'M'){
        masculino = (72.7 * altura) - 58;
        printf("O seu peso ideal é de:  %.2f kg\n", masculino);
        
    }else if(sexo == 'f' || sexo == 'F'){
        feminino = (62.1 * altura) - 44.7;
        printf("O seu peso ideal é de:  %.2f kg\n", feminino);
    }
    return 0;
}