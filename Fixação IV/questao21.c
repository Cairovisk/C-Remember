#include <stdio.h>

int main(void) {
    float altura, peso;
    char sexo;

    printf("Insira a altura da pessoa: "); 
    scanf("%f", &altura); //Leitura da altura
    printf("Insira o sexo da pessoa(M: masculino, F: feminino): "); 
    scanf(" %c", &sexo); //Leitura do sexo

    if(sexo == 'M') {
        peso = (72.7 * altura) - 58;
    }else if(sexo == 'F') {
        peso = (62.1 * altura) - 44.7;
    } else {
        printf("O valor inserido é inválido");
    }

    printf("Peso ideal: %.2f kg\n", peso); // Exibição do peso ideal da pessoa

    return 0;
}
