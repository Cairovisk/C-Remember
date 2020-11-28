#include <stdio.h>
int quantidadePar = 0, quantidadeImpar = 0;

void contaIntervalo (int limiteMinimo, int limiteMaximo) { // método que conta os números ímpares e pares no intervalo
    int range = (limiteMaximo - limiteMinimo) + 1; // Definição do tamanho do intervalo

    for(int i = 0; i < range; i++) { //Loop para contar ímpares e pares
        if(limiteMinimo % 2 == 0) {
            quantidadePar++;
        } else {
            quantidadeImpar++;
        }
        limiteMinimo++;
    }

    printf("Número de ímpares: %d\n", quantidadeImpar); //Exibe o número de ímpares
    printf("Números pares: %d\n", quantidadePar); //Exibe o número de pares
}

int main(void) {
    int limiteMinimo, limiteMaximo;

    printf("Digite o limite mínimo do intervalo: \n"); // Inserção do limite mínimo
    scanf("%d", &limiteMinimo);
    printf("Digite o limite máximo do intervalo: \n"); // Inserção do limite máximo
    scanf("%d", &limiteMaximo);

    contaIntervalo(limiteMinimo, limiteMaximo); // chamada da função que conta os ímpares e pares

    return 0;
}
