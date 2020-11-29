#include <stdio.h>
#include <stdlib.h>

const int lin = 5, col = 4;
int i, j;

void leVendas(float matrizVendas[lin][col]) {
    printf("Digite o valor das vendas dos vendedores por semana: \n");

    for(i = 0; i < lin; i++) {
        for(j = 0; j < col; j++) {
            printf("Valor da semana %d do vendedor %d", i+1, j+1);
            scanf("%f", &matrizVendas[i][j]);
        }
        printf("\n");
    }
}

void calculoTotalVendas(float matrizVendas[lin][col], float *vetorVendas ) {
    for(i = 0; i < lin; i++) {

        vetorVendas[i] = 0;
        for(j = 0; j < col; j++) {
            vetorVendas[i] += matrizVendas[i][j];
        }
    }
}

void calculoTotalSemanal(float matrizVendas[lin][col], float *vetorSemana) {
    for(j = 0; j < lin; j++) {

        vetorSemana[j] = 0;
        for(i = 0; i < col; i++) {
            vetorSemana[i] += matrizVendas[i][j];
        }
    }
}

int main(void) {
    int matrizA[lin][col] = {  29, 81, 37, 52, 14, 53, 71, 93, 5, 3, 49, 
    54, 24, 94, 15 }, matrizB[lin][col] = { 29, 81, 37, 52, 14, 53, 71, 93, 5, 3, 49, 
    54, 24, 94, 15 };
    

    somaMatriz(matrizA, matrizB); // Chamada do método somaMatriz

    return 0;
}
