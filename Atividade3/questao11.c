#include <stdio.h>
int quantidadePar = 0, quantidadeImpar = 0;

void contaIntervalo (int limiteMinimo, int limiteMaximo) {
    int range = (limiteMaximo - limiteMinimo) + 1;

    for(int i = 0; i < range; i++) {
        if(limiteMinimo % 2 == 0) {
            quantidadePar++;
        } else {
            quantidadeImpar++;
        }
        limiteMinimo++;
    }

    printf("Número de ímpares: %d\n", quantidadeImpar);
    printf("Números pares: %d\n", quantidadePar);
}

int main(void) {
    int limiteMinimo, limiteMaximo;

    printf("Digite o limite mínimo do intervalo: \n");
    scanf("%d", &limiteMinimo);
    printf("Digite o limite máximo do intervalo: \n");
    scanf("%d", &limiteMaximo);

    contaIntervalo(limiteMinimo, limiteMaximo);

    return 0;
}
