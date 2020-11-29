#include <stdio.h>
#include <stdlib.h>

const int lin = 5, col = 3;

void somaMatriz (int matrizA[lin][col], int matrizB[lin][col]) { // Método que soma duas matrizes 5x3

    int matrizC[lin][col];
    printf("Matriz soma: \n");
    for(int i = 0; i < lin; i++) { // Loop que define as linhas
        for(int j = 0; j < col; j++) { // Loop que define as colunas
        matrizC[i][j] = matrizA[i][j] + matrizB[i][j]; // Soma de cada elemento na posição ixj
        }
    }
    for(int i = 0; i < lin; i++) { // Loop que exibe as linhas
        for(int j = 0; j < col; j++) { // Loop que exibe as colunas
        printf("%d\t", matrizC[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

int main(void) {
    int matrizA[lin][col] = {  29, 81, 37, 52, 14, 53, 71, 93, 5, 3, 49, 
    54, 24, 94, 15 }, matrizB[lin][col] = { 29, 81, 37, 52, 14, 53, 71, 93, 5, 3, 49, 
    54, 24, 94, 15 };
    

    somaMatriz(matrizA, matrizB); // Chamada do método somaMatriz

    return 0;
}
